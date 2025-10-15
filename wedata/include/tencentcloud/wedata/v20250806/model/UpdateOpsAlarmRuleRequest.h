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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEOPSALARMRULEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEOPSALARMRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/AlarmRuleDetail.h>
#include <tencentcloud/wedata/v20250806/model/AlarmGroup.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateOpsAlarmRule request structure.
                */
                class UpdateOpsAlarmRuleRequest : public AbstractModel
                {
                public:
                    UpdateOpsAlarmRuleRequest();
                    ~UpdateOpsAlarmRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Specifies the unique id of the Alarm rule, obtained through the GetAlarmRule/ListAlarmRule api.
                     * @return AlarmRuleId Specifies the unique id of the Alarm rule, obtained through the GetAlarmRule/ListAlarmRule api.
                     * 
                     */
                    std::string GetAlarmRuleId() const;

                    /**
                     * 设置Specifies the unique id of the Alarm rule, obtained through the GetAlarmRule/ListAlarmRule api.
                     * @param _alarmRuleId Specifies the unique id of the Alarm rule, obtained through the GetAlarmRule/ListAlarmRule api.
                     * 
                     */
                    void SetAlarmRuleId(const std::string& _alarmRuleId);

                    /**
                     * 判断参数 AlarmRuleId 是否已赋值
                     * @return AlarmRuleId 是否已赋值
                     * 
                     */
                    bool AlarmRuleIdHasBeenSet() const;

                    /**
                     * 获取Specifies the new rule name of the Alarm rule.
                     * @return AlarmRuleName Specifies the new rule name of the Alarm rule.
                     * 
                     */
                    std::string GetAlarmRuleName() const;

                    /**
                     * 设置Specifies the new rule name of the Alarm rule.
                     * @param _alarmRuleName Specifies the new rule name of the Alarm rule.
                     * 
                     */
                    void SetAlarmRuleName(const std::string& _alarmRuleName);

                    /**
                     * 判断参数 AlarmRuleName 是否已赋值
                     * @return AlarmRuleName 是否已赋值
                     * 
                     */
                    bool AlarmRuleNameHasBeenSet() const;

                    /**
                     * 获取Monitoring Object Type

Task-level Monitoring - Can be configured by Task / Workflow / Project:
1 = Task (default)
2 = Workflow
3 = Project

Project-level Monitoring - Monitors overall task fluctuations within a project:
7 = Project fluctuation monitoring alarm
                     * @return MonitorObjectType Monitoring Object Type

Task-level Monitoring - Can be configured by Task / Workflow / Project:
1 = Task (default)
2 = Workflow
3 = Project

Project-level Monitoring - Monitors overall task fluctuations within a project:
7 = Project fluctuation monitoring alarm
                     * 
                     */
                    int64_t GetMonitorObjectType() const;

                    /**
                     * 设置Monitoring Object Type

Task-level Monitoring - Can be configured by Task / Workflow / Project:
1 = Task (default)
2 = Workflow
3 = Project

Project-level Monitoring - Monitors overall task fluctuations within a project:
7 = Project fluctuation monitoring alarm
                     * @param _monitorObjectType Monitoring Object Type

Task-level Monitoring - Can be configured by Task / Workflow / Project:
1 = Task (default)
2 = Workflow
3 = Project

Project-level Monitoring - Monitors overall task fluctuations within a project:
7 = Project fluctuation monitoring alarm
                     * 
                     */
                    void SetMonitorObjectType(const int64_t& _monitorObjectType);

                    /**
                     * 判断参数 MonitorObjectType 是否已赋值
                     * @return MonitorObjectType 是否已赋值
                     * 
                     */
                    bool MonitorObjectTypeHasBeenSet() const;

                    /**
                     * 获取Pass different business IDs based on the MonitorType setting:

1 (Task): MonitorObjectIds should be a list of task IDs.

2 (Workflow): MonitorObjectIds should be a list of workflow IDs (workflow IDs can be obtained via the ListWorkflows API).

3 (Project): MonitorObjectIds should be a list of project IDs.
                     * @return MonitorObjectIds Pass different business IDs based on the MonitorType setting:

1 (Task): MonitorObjectIds should be a list of task IDs.

2 (Workflow): MonitorObjectIds should be a list of workflow IDs (workflow IDs can be obtained via the ListWorkflows API).

3 (Project): MonitorObjectIds should be a list of project IDs.
                     * 
                     */
                    std::vector<std::string> GetMonitorObjectIds() const;

                    /**
                     * 设置Pass different business IDs based on the MonitorType setting:

1 (Task): MonitorObjectIds should be a list of task IDs.

2 (Workflow): MonitorObjectIds should be a list of workflow IDs (workflow IDs can be obtained via the ListWorkflows API).

3 (Project): MonitorObjectIds should be a list of project IDs.
                     * @param _monitorObjectIds Pass different business IDs based on the MonitorType setting:

1 (Task): MonitorObjectIds should be a list of task IDs.

2 (Workflow): MonitorObjectIds should be a list of workflow IDs (workflow IDs can be obtained via the ListWorkflows API).

3 (Project): MonitorObjectIds should be a list of project IDs.
                     * 
                     */
                    void SetMonitorObjectIds(const std::vector<std::string>& _monitorObjectIds);

                    /**
                     * 判断参数 MonitorObjectIds 是否已赋值
                     * @return MonitorObjectIds 是否已赋值
                     * 
                     */
                    bool MonitorObjectIdsHasBeenSet() const;

                    /**
                     * 获取Alarm Rule Monitoring Types

failure: Failure alarm

overtime: Timeout alarm

success: Success alarm

backTrackingOrRerunSuccess: Alarm when backfill/rerun succeeds

backTrackingOrRerunFailure: Alarm when backfill/rerun fails

projectFailureInstanceUpwardFluctuationAlarm: Alarm when the upward fluctuation rate of failed instances for the day exceeds the threshold

projectFailureInstanceUpwardVolatilityAlarm: Alarm when the upward fluctuation count of failed instances for the day exceeds the threshold

projectSuccessInstanceDownwardFluctuationAlarm: Alarm when the downward fluctuation rate of successful instances for the day exceeds the threshold

projectSuccessInstanceDownwardVolatilityAlarm: Alarm when the downward fluctuation count of successful instances for the day exceeds the threshold

projectFailureInstanceCountAlarm: Alarm when the number of failed instances for the day exceeds the threshold

projectFailureInstanceProportionAlarm: Alarm when the proportion of failed instances for the day exceeds the threshold

reconciliationFailure: Alarm when offline reconciliation task fails

reconciliationOvertime: Alarm when offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     * @return AlarmTypes Alarm Rule Monitoring Types

failure: Failure alarm

overtime: Timeout alarm

success: Success alarm

backTrackingOrRerunSuccess: Alarm when backfill/rerun succeeds

backTrackingOrRerunFailure: Alarm when backfill/rerun fails

projectFailureInstanceUpwardFluctuationAlarm: Alarm when the upward fluctuation rate of failed instances for the day exceeds the threshold

projectFailureInstanceUpwardVolatilityAlarm: Alarm when the upward fluctuation count of failed instances for the day exceeds the threshold

projectSuccessInstanceDownwardFluctuationAlarm: Alarm when the downward fluctuation rate of successful instances for the day exceeds the threshold

projectSuccessInstanceDownwardVolatilityAlarm: Alarm when the downward fluctuation count of successful instances for the day exceeds the threshold

projectFailureInstanceCountAlarm: Alarm when the number of failed instances for the day exceeds the threshold

projectFailureInstanceProportionAlarm: Alarm when the proportion of failed instances for the day exceeds the threshold

reconciliationFailure: Alarm when offline reconciliation task fails

reconciliationOvertime: Alarm when offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     * 
                     */
                    std::vector<std::string> GetAlarmTypes() const;

                    /**
                     * 设置Alarm Rule Monitoring Types

failure: Failure alarm

overtime: Timeout alarm

success: Success alarm

backTrackingOrRerunSuccess: Alarm when backfill/rerun succeeds

backTrackingOrRerunFailure: Alarm when backfill/rerun fails

projectFailureInstanceUpwardFluctuationAlarm: Alarm when the upward fluctuation rate of failed instances for the day exceeds the threshold

projectFailureInstanceUpwardVolatilityAlarm: Alarm when the upward fluctuation count of failed instances for the day exceeds the threshold

projectSuccessInstanceDownwardFluctuationAlarm: Alarm when the downward fluctuation rate of successful instances for the day exceeds the threshold

projectSuccessInstanceDownwardVolatilityAlarm: Alarm when the downward fluctuation count of successful instances for the day exceeds the threshold

projectFailureInstanceCountAlarm: Alarm when the number of failed instances for the day exceeds the threshold

projectFailureInstanceProportionAlarm: Alarm when the proportion of failed instances for the day exceeds the threshold

reconciliationFailure: Alarm when offline reconciliation task fails

reconciliationOvertime: Alarm when offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     * @param _alarmTypes Alarm Rule Monitoring Types

failure: Failure alarm

overtime: Timeout alarm

success: Success alarm

backTrackingOrRerunSuccess: Alarm when backfill/rerun succeeds

backTrackingOrRerunFailure: Alarm when backfill/rerun fails

projectFailureInstanceUpwardFluctuationAlarm: Alarm when the upward fluctuation rate of failed instances for the day exceeds the threshold

projectFailureInstanceUpwardVolatilityAlarm: Alarm when the upward fluctuation count of failed instances for the day exceeds the threshold

projectSuccessInstanceDownwardFluctuationAlarm: Alarm when the downward fluctuation rate of successful instances for the day exceeds the threshold

projectSuccessInstanceDownwardVolatilityAlarm: Alarm when the downward fluctuation count of successful instances for the day exceeds the threshold

projectFailureInstanceCountAlarm: Alarm when the number of failed instances for the day exceeds the threshold

projectFailureInstanceProportionAlarm: Alarm when the proportion of failed instances for the day exceeds the threshold

reconciliationFailure: Alarm when offline reconciliation task fails

reconciliationOvertime: Alarm when offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     * 
                     */
                    void SetAlarmTypes(const std::vector<std::string>& _alarmTypes);

                    /**
                     * 判断参数 AlarmTypes 是否已赋值
                     * @return AlarmTypes 是否已赋值
                     * 
                     */
                    bool AlarmTypesHasBeenSet() const;

                    /**
                     * 获取Alarm Rule Configuration Information

Success Alarms - No configuration required;

Failure Alarms - Can be configured to trigger on the first failure or on all retry failures;

Timeout Alarms - Require configuration of the timeout type and timeout threshold;

Project Fluctuation Alarms - Require configuration of the fluctuation rate and the debounce cycle.
                     * @return AlarmRuleDetail Alarm Rule Configuration Information

Success Alarms - No configuration required;

Failure Alarms - Can be configured to trigger on the first failure or on all retry failures;

Timeout Alarms - Require configuration of the timeout type and timeout threshold;

Project Fluctuation Alarms - Require configuration of the fluctuation rate and the debounce cycle.
                     * 
                     */
                    AlarmRuleDetail GetAlarmRuleDetail() const;

                    /**
                     * 设置Alarm Rule Configuration Information

Success Alarms - No configuration required;

Failure Alarms - Can be configured to trigger on the first failure or on all retry failures;

Timeout Alarms - Require configuration of the timeout type and timeout threshold;

Project Fluctuation Alarms - Require configuration of the fluctuation rate and the debounce cycle.
                     * @param _alarmRuleDetail Alarm Rule Configuration Information

Success Alarms - No configuration required;

Failure Alarms - Can be configured to trigger on the first failure or on all retry failures;

Timeout Alarms - Require configuration of the timeout type and timeout threshold;

Project Fluctuation Alarms - Require configuration of the fluctuation rate and the debounce cycle.
                     * 
                     */
                    void SetAlarmRuleDetail(const AlarmRuleDetail& _alarmRuleDetail);

                    /**
                     * 判断参数 AlarmRuleDetail 是否已赋值
                     * @return AlarmRuleDetail 是否已赋值
                     * 
                     */
                    bool AlarmRuleDetailHasBeenSet() const;

                    /**
                     * 获取Enable status of the Alarm rule. valid values: 0 (disabled), 1 (enabled).
                     * @return Status Enable status of the Alarm rule. valid values: 0 (disabled), 1 (enabled).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Enable status of the Alarm rule. valid values: 0 (disabled), 1 (enabled).
                     * @param _status Enable status of the Alarm rule. valid values: 0 (disabled), 1 (enabled).
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Alarm level. 1. ordinary, 2. important, 3. critical.
                     * @return AlarmLevel Alarm level. 1. ordinary, 2. important, 3. critical.
                     * 
                     */
                    int64_t GetAlarmLevel() const;

                    /**
                     * 设置Alarm level. 1. ordinary, 2. important, 3. critical.
                     * @param _alarmLevel Alarm level. 1. ordinary, 2. important, 3. critical.
                     * 
                     */
                    void SetAlarmLevel(const int64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取Describes the Alarm recipient configuration message.
                     * @return AlarmGroups Describes the Alarm recipient configuration message.
                     * 
                     */
                    std::vector<AlarmGroup> GetAlarmGroups() const;

                    /**
                     * 设置Describes the Alarm recipient configuration message.
                     * @param _alarmGroups Describes the Alarm recipient configuration message.
                     * 
                     */
                    void SetAlarmGroups(const std::vector<AlarmGroup>& _alarmGroups);

                    /**
                     * 判断参数 AlarmGroups 是否已赋值
                     * @return AlarmGroups 是否已赋值
                     * 
                     */
                    bool AlarmGroupsHasBeenSet() const;

                    /**
                     * 获取Alarm description.
                     * @return Description Alarm description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Alarm description.
                     * @param _description Alarm description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Specifies the unique id of the Alarm rule, obtained through the GetAlarmRule/ListAlarmRule api.
                     */
                    std::string m_alarmRuleId;
                    bool m_alarmRuleIdHasBeenSet;

                    /**
                     * Specifies the new rule name of the Alarm rule.
                     */
                    std::string m_alarmRuleName;
                    bool m_alarmRuleNameHasBeenSet;

                    /**
                     * Monitoring Object Type

Task-level Monitoring - Can be configured by Task / Workflow / Project:
1 = Task (default)
2 = Workflow
3 = Project

Project-level Monitoring - Monitors overall task fluctuations within a project:
7 = Project fluctuation monitoring alarm
                     */
                    int64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                    /**
                     * Pass different business IDs based on the MonitorType setting:

1 (Task): MonitorObjectIds should be a list of task IDs.

2 (Workflow): MonitorObjectIds should be a list of workflow IDs (workflow IDs can be obtained via the ListWorkflows API).

3 (Project): MonitorObjectIds should be a list of project IDs.
                     */
                    std::vector<std::string> m_monitorObjectIds;
                    bool m_monitorObjectIdsHasBeenSet;

                    /**
                     * Alarm Rule Monitoring Types

failure: Failure alarm

overtime: Timeout alarm

success: Success alarm

backTrackingOrRerunSuccess: Alarm when backfill/rerun succeeds

backTrackingOrRerunFailure: Alarm when backfill/rerun fails

projectFailureInstanceUpwardFluctuationAlarm: Alarm when the upward fluctuation rate of failed instances for the day exceeds the threshold

projectFailureInstanceUpwardVolatilityAlarm: Alarm when the upward fluctuation count of failed instances for the day exceeds the threshold

projectSuccessInstanceDownwardFluctuationAlarm: Alarm when the downward fluctuation rate of successful instances for the day exceeds the threshold

projectSuccessInstanceDownwardVolatilityAlarm: Alarm when the downward fluctuation count of successful instances for the day exceeds the threshold

projectFailureInstanceCountAlarm: Alarm when the number of failed instances for the day exceeds the threshold

projectFailureInstanceProportionAlarm: Alarm when the proportion of failed instances for the day exceeds the threshold

reconciliationFailure: Alarm when offline reconciliation task fails

reconciliationOvertime: Alarm when offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     */
                    std::vector<std::string> m_alarmTypes;
                    bool m_alarmTypesHasBeenSet;

                    /**
                     * Alarm Rule Configuration Information

Success Alarms - No configuration required;

Failure Alarms - Can be configured to trigger on the first failure or on all retry failures;

Timeout Alarms - Require configuration of the timeout type and timeout threshold;

Project Fluctuation Alarms - Require configuration of the fluctuation rate and the debounce cycle.
                     */
                    AlarmRuleDetail m_alarmRuleDetail;
                    bool m_alarmRuleDetailHasBeenSet;

                    /**
                     * Enable status of the Alarm rule. valid values: 0 (disabled), 1 (enabled).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Alarm level. 1. ordinary, 2. important, 3. critical.
                     */
                    int64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Describes the Alarm recipient configuration message.
                     */
                    std::vector<AlarmGroup> m_alarmGroups;
                    bool m_alarmGroupsHasBeenSet;

                    /**
                     * Alarm description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEOPSALARMRULEREQUEST_H_
