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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDATA_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Alarm Rule Details
                */
                class AlarmRuleData : public AbstractModel
                {
                public:
                    AlarmRuleData();
                    ~AlarmRuleData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm Rule ID
                     * @return AlarmRuleId Alarm Rule ID
                     * 
                     */
                    std::string GetAlarmRuleId() const;

                    /**
                     * 设置Alarm Rule ID
                     * @param _alarmRuleId Alarm Rule ID
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
                     * 获取Specifies the Alarm rule name.
                     * @return AlarmRuleName Specifies the Alarm rule name.
                     * 
                     */
                    std::string GetAlarmRuleName() const;

                    /**
                     * 设置Specifies the Alarm rule name.
                     * @param _alarmRuleName Specifies the Alarm rule name.
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
                     * 获取Describes the Alarm rule.
                     * @return Description Describes the Alarm rule.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Describes the Alarm rule.
                     * @param _description Describes the Alarm rule.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

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
                     * 获取Pass different business IDs depending on the value of MonitorType:

1 (Task): MonitorObjectIds should contain a list of task IDs.

2 (Workflow): MonitorObjectIds should contain a list of workflow IDs (workflow IDs can be obtained using the ListWorkflows API).

3 (Project): MonitorObjectIds should contain a list of project IDs.
                     * @return MonitorObjectIds Pass different business IDs depending on the value of MonitorType:

1 (Task): MonitorObjectIds should contain a list of task IDs.

2 (Workflow): MonitorObjectIds should contain a list of workflow IDs (workflow IDs can be obtained using the ListWorkflows API).

3 (Project): MonitorObjectIds should contain a list of project IDs.
                     * 
                     */
                    std::vector<std::string> GetMonitorObjectIds() const;

                    /**
                     * 设置Pass different business IDs depending on the value of MonitorType:

1 (Task): MonitorObjectIds should contain a list of task IDs.

2 (Workflow): MonitorObjectIds should contain a list of workflow IDs (workflow IDs can be obtained using the ListWorkflows API).

3 (Project): MonitorObjectIds should contain a list of project IDs.
                     * @param _monitorObjectIds Pass different business IDs depending on the value of MonitorType:

1 (Task): MonitorObjectIds should contain a list of task IDs.

2 (Workflow): MonitorObjectIds should contain a list of workflow IDs (workflow IDs can be obtained using the ListWorkflows API).

3 (Project): MonitorObjectIds should contain a list of project IDs.
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
                     * 获取Alarm Rule Monitoring Types:

failure: Failure alarm

overtime: Timeout alarm

success: Success alarm

backTrackingOrRerunSuccess: Alarm when backfill/rerun succeeds

backTrackingOrRerunFailure: Alarm when backfill/rerun fails

projectFailureInstanceUpwardFluctuationAlarm: Alarm when the upward fluctuation rate of failed instances for the day exceeds the threshold

projectSuccessInstanceDownwardFluctuationAlarm: Alarm when the downward fluctuation rate of successful instances for the day exceeds the threshold

reconciliationFailure: Alarm when an offline reconciliation task fails

reconciliationOvertime: Alarm when an offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     * @return AlarmTypes Alarm Rule Monitoring Types:

failure: Failure alarm

overtime: Timeout alarm

success: Success alarm

backTrackingOrRerunSuccess: Alarm when backfill/rerun succeeds

backTrackingOrRerunFailure: Alarm when backfill/rerun fails

projectFailureInstanceUpwardFluctuationAlarm: Alarm when the upward fluctuation rate of failed instances for the day exceeds the threshold

projectSuccessInstanceDownwardFluctuationAlarm: Alarm when the downward fluctuation rate of successful instances for the day exceeds the threshold

reconciliationFailure: Alarm when an offline reconciliation task fails

reconciliationOvertime: Alarm when an offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     * 
                     */
                    std::vector<std::string> GetAlarmTypes() const;

                    /**
                     * 设置Alarm Rule Monitoring Types:

failure: Failure alarm

overtime: Timeout alarm

success: Success alarm

backTrackingOrRerunSuccess: Alarm when backfill/rerun succeeds

backTrackingOrRerunFailure: Alarm when backfill/rerun fails

projectFailureInstanceUpwardFluctuationAlarm: Alarm when the upward fluctuation rate of failed instances for the day exceeds the threshold

projectSuccessInstanceDownwardFluctuationAlarm: Alarm when the downward fluctuation rate of successful instances for the day exceeds the threshold

reconciliationFailure: Alarm when an offline reconciliation task fails

reconciliationOvertime: Alarm when an offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     * @param _alarmTypes Alarm Rule Monitoring Types:

failure: Failure alarm

overtime: Timeout alarm

success: Success alarm

backTrackingOrRerunSuccess: Alarm when backfill/rerun succeeds

backTrackingOrRerunFailure: Alarm when backfill/rerun fails

projectFailureInstanceUpwardFluctuationAlarm: Alarm when the upward fluctuation rate of failed instances for the day exceeds the threshold

projectSuccessInstanceDownwardFluctuationAlarm: Alarm when the downward fluctuation rate of successful instances for the day exceeds the threshold

reconciliationFailure: Alarm when an offline reconciliation task fails

reconciliationOvertime: Alarm when an offline reconciliation task runs overtime

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
                     * 获取Whether the Alarm rule is enabled.
Valid values: 0 (disabled), 1 (enabled).
                     * @return Status Whether the Alarm rule is enabled.
Valid values: 0 (disabled), 1 (enabled).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Whether the Alarm rule is enabled.
Valid values: 0 (disabled), 1 (enabled).
                     * @param _status Whether the Alarm rule is enabled.
Valid values: 0 (disabled), 1 (enabled).
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
                     * 获取Specifies the id of the Alarm rule creator.
                     * @return OwnerUin Specifies the id of the Alarm rule creator.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Specifies the id of the Alarm rule creator.
                     * @param _ownerUin Specifies the id of the Alarm rule creator.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取The Alarm rule bound to the bundle client. it is normal if empty, otherwise it corresponds to the rule bound to the bundle client.
                     * @return BundleId The Alarm rule bound to the bundle client. it is normal if empty, otherwise it corresponds to the rule bound to the bundle client.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置The Alarm rule bound to the bundle client. it is normal if empty, otherwise it corresponds to the rule bound to the bundle client.
                     * @param _bundleId The Alarm rule bound to the bundle client. it is normal if empty, otherwise it corresponds to the rule bound to the bundle client.
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取bundleId is not empty. it indicates the bound client name.

                     * @return BundleInfo bundleId is not empty. it indicates the bound client name.

                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置bundleId is not empty. it indicates the bound client name.

                     * @param _bundleInfo bundleId is not empty. it indicates the bound client name.

                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                    /**
                     * 获取Describes the Alarm recipient configuration list.
                     * @return AlarmGroups Describes the Alarm recipient configuration list.
                     * 
                     */
                    std::vector<AlarmGroup> GetAlarmGroups() const;

                    /**
                     * 设置Describes the Alarm recipient configuration list.
                     * @param _alarmGroups Describes the Alarm recipient configuration list.
                     * 
                     */
                    void SetAlarmGroups(const std::vector<AlarmGroup>& _alarmGroups);

                    /**
                     * 判断参数 AlarmGroups 是否已赋值
                     * @return AlarmGroups 是否已赋值
                     * 
                     */
                    bool AlarmGroupsHasBeenSet() const;

                private:

                    /**
                     * Alarm Rule ID
                     */
                    std::string m_alarmRuleId;
                    bool m_alarmRuleIdHasBeenSet;

                    /**
                     * Specifies the Alarm rule name.
                     */
                    std::string m_alarmRuleName;
                    bool m_alarmRuleNameHasBeenSet;

                    /**
                     * Describes the Alarm rule.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

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
                     * Pass different business IDs depending on the value of MonitorType:

1 (Task): MonitorObjectIds should contain a list of task IDs.

2 (Workflow): MonitorObjectIds should contain a list of workflow IDs (workflow IDs can be obtained using the ListWorkflows API).

3 (Project): MonitorObjectIds should contain a list of project IDs.
                     */
                    std::vector<std::string> m_monitorObjectIds;
                    bool m_monitorObjectIdsHasBeenSet;

                    /**
                     * Alarm Rule Monitoring Types:

failure: Failure alarm

overtime: Timeout alarm

success: Success alarm

backTrackingOrRerunSuccess: Alarm when backfill/rerun succeeds

backTrackingOrRerunFailure: Alarm when backfill/rerun fails

projectFailureInstanceUpwardFluctuationAlarm: Alarm when the upward fluctuation rate of failed instances for the day exceeds the threshold

projectSuccessInstanceDownwardFluctuationAlarm: Alarm when the downward fluctuation rate of successful instances for the day exceeds the threshold

reconciliationFailure: Alarm when an offline reconciliation task fails

reconciliationOvertime: Alarm when an offline reconciliation task runs overtime

reconciliationMismatch: Alarm when the number of mismatched records in reconciliation exceeds the threshold
                     */
                    std::vector<std::string> m_alarmTypes;
                    bool m_alarmTypesHasBeenSet;

                    /**
                     * Whether the Alarm rule is enabled.
Valid values: 0 (disabled), 1 (enabled).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

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
                     * Alarm level. 1. ordinary, 2. important, 3. critical.
                     */
                    int64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Specifies the id of the Alarm rule creator.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * The Alarm rule bound to the bundle client. it is normal if empty, otherwise it corresponds to the rule bound to the bundle client.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * bundleId is not empty. it indicates the bound client name.

                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * Describes the Alarm recipient configuration list.
                     */
                    std::vector<AlarmGroup> m_alarmGroups;
                    bool m_alarmGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDATA_H_
