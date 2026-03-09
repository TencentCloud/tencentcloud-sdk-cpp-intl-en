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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TimeOutStrategyInfo.h>
#include <tencentcloud/wedata/v20250806/model/ProjectInstanceStatisticsAlarmInfo.h>
#include <tencentcloud/wedata/v20250806/model/ReconciliationStrategyInfo.h>
#include <tencentcloud/wedata/v20250806/model/MonitorWhiteTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Detailed configuration of the Alarm rule.
                */
                class AlarmRuleDetail : public AbstractModel
                {
                public:
                    AlarmRuleDetail();
                    ~AlarmRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Failure Trigger Condition

1: Trigger on the first failure

2: Trigger after all retries are completed (default)
                     * @return Trigger Failure Trigger Condition

1: Trigger on the first failure

2: Trigger after all retries are completed (default)
                     * 
                     */
                    int64_t GetTrigger() const;

                    /**
                     * 设置Failure Trigger Condition

1: Trigger on the first failure

2: Trigger after all retries are completed (default)
                     * @param _trigger Failure Trigger Condition

1: Trigger on the first failure

2: Trigger after all retries are completed (default)
                     * 
                     */
                    void SetTrigger(const int64_t& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取Backfill/Rerun Trigger Condition

1: Trigger on the first failure

2: Trigger after all retries are completed
                     * @return DataBackfillOrRerunTrigger Backfill/Rerun Trigger Condition

1: Trigger on the first failure

2: Trigger after all retries are completed
                     * 
                     */
                    int64_t GetDataBackfillOrRerunTrigger() const;

                    /**
                     * 设置Backfill/Rerun Trigger Condition

1: Trigger on the first failure

2: Trigger after all retries are completed
                     * @param _dataBackfillOrRerunTrigger Backfill/Rerun Trigger Condition

1: Trigger on the first failure

2: Trigger after all retries are completed
                     * 
                     */
                    void SetDataBackfillOrRerunTrigger(const int64_t& _dataBackfillOrRerunTrigger);

                    /**
                     * 判断参数 DataBackfillOrRerunTrigger 是否已赋值
                     * @return DataBackfillOrRerunTrigger 是否已赋值
                     * 
                     */
                    bool DataBackfillOrRerunTriggerHasBeenSet() const;

                    /**
                     * 获取Timeout configuration of the periodic instance.

                     * @return TimeOutExtInfo Timeout configuration of the periodic instance.

                     * 
                     */
                    std::vector<TimeOutStrategyInfo> GetTimeOutExtInfo() const;

                    /**
                     * 设置Timeout configuration of the periodic instance.

                     * @param _timeOutExtInfo Timeout configuration of the periodic instance.

                     * 
                     */
                    void SetTimeOutExtInfo(const std::vector<TimeOutStrategyInfo>& _timeOutExtInfo);

                    /**
                     * 判断参数 TimeOutExtInfo 是否已赋值
                     * @return TimeOutExtInfo 是否已赋值
                     * 
                     */
                    bool TimeOutExtInfoHasBeenSet() const;

                    /**
                     * 获取Specifies the timeout configuration details for rerunning a backfill instance.

                     * @return DataBackfillOrRerunTimeOutExtInfo Specifies the timeout configuration details for rerunning a backfill instance.

                     * 
                     */
                    std::vector<TimeOutStrategyInfo> GetDataBackfillOrRerunTimeOutExtInfo() const;

                    /**
                     * 设置Specifies the timeout configuration details for rerunning a backfill instance.

                     * @param _dataBackfillOrRerunTimeOutExtInfo Specifies the timeout configuration details for rerunning a backfill instance.

                     * 
                     */
                    void SetDataBackfillOrRerunTimeOutExtInfo(const std::vector<TimeOutStrategyInfo>& _dataBackfillOrRerunTimeOutExtInfo);

                    /**
                     * 判断参数 DataBackfillOrRerunTimeOutExtInfo 是否已赋值
                     * @return DataBackfillOrRerunTimeOutExtInfo 是否已赋值
                     * 
                     */
                    bool DataBackfillOrRerunTimeOutExtInfoHasBeenSet() const;

                    /**
                     * 获取Specifies the detail of Alarm configuration for project fluctuation.
                     * @return ProjectInstanceStatisticsAlarmInfoList Specifies the detail of Alarm configuration for project fluctuation.
                     * 
                     */
                    std::vector<ProjectInstanceStatisticsAlarmInfo> GetProjectInstanceStatisticsAlarmInfoList() const;

                    /**
                     * 设置Specifies the detail of Alarm configuration for project fluctuation.
                     * @param _projectInstanceStatisticsAlarmInfoList Specifies the detail of Alarm configuration for project fluctuation.
                     * 
                     */
                    void SetProjectInstanceStatisticsAlarmInfoList(const std::vector<ProjectInstanceStatisticsAlarmInfo>& _projectInstanceStatisticsAlarmInfoList);

                    /**
                     * 判断参数 ProjectInstanceStatisticsAlarmInfoList 是否已赋值
                     * @return ProjectInstanceStatisticsAlarmInfoList 是否已赋值
                     * 
                     */
                    bool ProjectInstanceStatisticsAlarmInfoListHasBeenSet() const;

                    /**
                     * 获取Describes the Alarm configuration information for offline integration reconciliation.
                     * @return ReconciliationExtInfo Describes the Alarm configuration information for offline integration reconciliation.
                     * 
                     */
                    std::vector<ReconciliationStrategyInfo> GetReconciliationExtInfo() const;

                    /**
                     * 设置Describes the Alarm configuration information for offline integration reconciliation.
                     * @param _reconciliationExtInfo Describes the Alarm configuration information for offline integration reconciliation.
                     * 
                     */
                    void SetReconciliationExtInfo(const std::vector<ReconciliationStrategyInfo>& _reconciliationExtInfo);

                    /**
                     * 判断参数 ReconciliationExtInfo 是否已赋值
                     * @return ReconciliationExtInfo 是否已赋值
                     * 
                     */
                    bool ReconciliationExtInfoHasBeenSet() const;

                    /**
                     * 获取Configure allowlist for monitored object.
                     * @return MonitorWhiteTasks Configure allowlist for monitored object.
                     * 
                     */
                    std::vector<MonitorWhiteTask> GetMonitorWhiteTasks() const;

                    /**
                     * 设置Configure allowlist for monitored object.
                     * @param _monitorWhiteTasks Configure allowlist for monitored object.
                     * 
                     */
                    void SetMonitorWhiteTasks(const std::vector<MonitorWhiteTask>& _monitorWhiteTasks);

                    /**
                     * 判断参数 MonitorWhiteTasks 是否已赋值
                     * @return MonitorWhiteTasks 是否已赋值
                     * 
                     */
                    bool MonitorWhiteTasksHasBeenSet() const;

                    /**
                     * 获取3.0 Workflow completion time (period) Alarm policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowCompletionTimeCycleExtInfo 3.0 Workflow completion time (period) Alarm policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TimeOutStrategyInfo> GetWorkflowCompletionTimeCycleExtInfo() const;

                    /**
                     * 设置3.0 Workflow completion time (period) Alarm policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowCompletionTimeCycleExtInfo 3.0 Workflow completion time (period) Alarm policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowCompletionTimeCycleExtInfo(const std::vector<TimeOutStrategyInfo>& _workflowCompletionTimeCycleExtInfo);

                    /**
                     * 判断参数 WorkflowCompletionTimeCycleExtInfo 是否已赋值
                     * @return WorkflowCompletionTimeCycleExtInfo 是否已赋值
                     * 
                     */
                    bool WorkflowCompletionTimeCycleExtInfoHasBeenSet() const;

                    /**
                     * 获取Workflow execution triggers the Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowExecutionTrigger Workflow execution triggers the Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWorkflowExecutionTrigger() const;

                    /**
                     * 设置Workflow execution triggers the Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowExecutionTrigger Workflow execution triggers the Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowExecutionTrigger(const int64_t& _workflowExecutionTrigger);

                    /**
                     * 判断参数 WorkflowExecutionTrigger 是否已赋值
                     * @return WorkflowExecutionTrigger 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionTriggerHasBeenSet() const;

                    /**
                     * 获取Workflow execution failure Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowExecutionFailureTrigger Workflow execution failure Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWorkflowExecutionFailureTrigger() const;

                    /**
                     * 设置Workflow execution failure Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowExecutionFailureTrigger Workflow execution failure Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowExecutionFailureTrigger(const int64_t& _workflowExecutionFailureTrigger);

                    /**
                     * 判断参数 WorkflowExecutionFailureTrigger 是否已赋值
                     * @return WorkflowExecutionFailureTrigger 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionFailureTriggerHasBeenSet() const;

                    /**
                     * 获取Workflow execution successful Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowExecutionSuccessTrigger Workflow execution successful Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWorkflowExecutionSuccessTrigger() const;

                    /**
                     * 设置Workflow execution successful Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowExecutionSuccessTrigger Workflow execution successful Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowExecutionSuccessTrigger(const int64_t& _workflowExecutionSuccessTrigger);

                    /**
                     * 判断参数 WorkflowExecutionSuccessTrigger 是否已赋值
                     * @return WorkflowExecutionSuccessTrigger 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionSuccessTriggerHasBeenSet() const;

                private:

                    /**
                     * Failure Trigger Condition

1: Trigger on the first failure

2: Trigger after all retries are completed (default)
                     */
                    int64_t m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * Backfill/Rerun Trigger Condition

1: Trigger on the first failure

2: Trigger after all retries are completed
                     */
                    int64_t m_dataBackfillOrRerunTrigger;
                    bool m_dataBackfillOrRerunTriggerHasBeenSet;

                    /**
                     * Timeout configuration of the periodic instance.

                     */
                    std::vector<TimeOutStrategyInfo> m_timeOutExtInfo;
                    bool m_timeOutExtInfoHasBeenSet;

                    /**
                     * Specifies the timeout configuration details for rerunning a backfill instance.

                     */
                    std::vector<TimeOutStrategyInfo> m_dataBackfillOrRerunTimeOutExtInfo;
                    bool m_dataBackfillOrRerunTimeOutExtInfoHasBeenSet;

                    /**
                     * Specifies the detail of Alarm configuration for project fluctuation.
                     */
                    std::vector<ProjectInstanceStatisticsAlarmInfo> m_projectInstanceStatisticsAlarmInfoList;
                    bool m_projectInstanceStatisticsAlarmInfoListHasBeenSet;

                    /**
                     * Describes the Alarm configuration information for offline integration reconciliation.
                     */
                    std::vector<ReconciliationStrategyInfo> m_reconciliationExtInfo;
                    bool m_reconciliationExtInfoHasBeenSet;

                    /**
                     * Configure allowlist for monitored object.
                     */
                    std::vector<MonitorWhiteTask> m_monitorWhiteTasks;
                    bool m_monitorWhiteTasksHasBeenSet;

                    /**
                     * 3.0 Workflow completion time (period) Alarm policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TimeOutStrategyInfo> m_workflowCompletionTimeCycleExtInfo;
                    bool m_workflowCompletionTimeCycleExtInfoHasBeenSet;

                    /**
                     * Workflow execution triggers the Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_workflowExecutionTrigger;
                    bool m_workflowExecutionTriggerHasBeenSet;

                    /**
                     * Workflow execution failure Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_workflowExecutionFailureTrigger;
                    bool m_workflowExecutionFailureTriggerHasBeenSet;

                    /**
                     * Workflow execution successful Alarm condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_workflowExecutionSuccessTrigger;
                    bool m_workflowExecutionSuccessTriggerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDETAIL_H_
