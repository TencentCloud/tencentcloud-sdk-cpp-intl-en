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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSALARMRULESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSALARMRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListOpsAlarmRules request structure.
                */
                class ListOpsAlarmRulesRequest : public AbstractModel
                {
                public:
                    ListOpsAlarmRulesRequest();
                    ~ListOpsAlarmRulesRequest() = default;
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
                     * 获取Page number for pagination. defaults to 1.
                     * @return PageNumber Page number for pagination. defaults to 1.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number for pagination. defaults to 1.
                     * @param _pageNumber Page number for pagination. defaults to 1.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of items to display per page, defaults to 20, minimum value 1, maximum value 200.
                     * @return PageSize Number of items to display per page, defaults to 20, minimum value 1, maximum value 200.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items to display per page, defaults to 20, minimum value 1, maximum value 200.
                     * @param _pageSize Number of items to display per page, defaults to 20, minimum value 1, maximum value 200.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

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
                     * 获取Based on task id, queries Alarm rules.
                     * @return TaskId Based on task id, queries Alarm rules.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Based on task id, queries Alarm rules.
                     * @param _taskId Based on task id, queries Alarm rules.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

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
                     * @return AlarmType Alarm Rule Monitoring Types:

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
                    std::string GetAlarmType() const;

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
                     * @param _alarmType Alarm Rule Monitoring Types:

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
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取Queries Alarm rules configured with corresponding Alarm levels.
Valid values: 1. ordinary, 2. important, 3. critical.
                     * @return AlarmLevel Queries Alarm rules configured with corresponding Alarm levels.
Valid values: 1. ordinary, 2. important, 3. critical.
                     * 
                     */
                    int64_t GetAlarmLevel() const;

                    /**
                     * 设置Queries Alarm rules configured with corresponding Alarm levels.
Valid values: 1. ordinary, 2. important, 3. critical.
                     * @param _alarmLevel Queries Alarm rules configured with corresponding Alarm levels.
Valid values: 1. ordinary, 2. important, 3. critical.
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
                     * 获取Query the alarm rules associated with the configured alarm recipients.
                     * @return AlarmRecipientId Query the alarm rules associated with the configured alarm recipients.
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置Query the alarm rules associated with the configured alarm recipients.
                     * @param _alarmRecipientId Query the alarm rules associated with the configured alarm recipients.
                     * 
                     */
                    void SetAlarmRecipientId(const std::string& _alarmRecipientId);

                    /**
                     * 判断参数 AlarmRecipientId 是否已赋值
                     * @return AlarmRecipientId 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdHasBeenSet() const;

                    /**
                     * 获取Queries the corresponding Alarm rule based on Alarm rule id or rule name.
                     * @return Keyword Queries the corresponding Alarm rule based on Alarm rule id or rule name.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Queries the corresponding Alarm rule based on Alarm rule id or rule name.
                     * @param _keyword Queries the corresponding Alarm rule based on Alarm rule id or rule name.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Specifies the creator filter for Alarm rule creation.
                     * @return CreateUserUin Specifies the creator filter for Alarm rule creation.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Specifies the creator filter for Alarm rule creation.
                     * @param _createUserUin Specifies the creator filter for Alarm rule creation.
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取Start time of the Alarm rule create time range, in the format of 2025-08-17 00:00:00.
                     * @return CreateTimeFrom Start time of the Alarm rule create time range, in the format of 2025-08-17 00:00:00.
                     * 
                     */
                    std::string GetCreateTimeFrom() const;

                    /**
                     * 设置Start time of the Alarm rule create time range, in the format of 2025-08-17 00:00:00.
                     * @param _createTimeFrom Start time of the Alarm rule create time range, in the format of 2025-08-17 00:00:00.
                     * 
                     */
                    void SetCreateTimeFrom(const std::string& _createTimeFrom);

                    /**
                     * 判断参数 CreateTimeFrom 是否已赋值
                     * @return CreateTimeFrom 是否已赋值
                     * 
                     */
                    bool CreateTimeFromHasBeenSet() const;

                    /**
                     * 获取End time of the Alarm rule creation time range, in the format of "2025-08-26 23:59:59".

                     * @return CreateTimeTo End time of the Alarm rule creation time range, in the format of "2025-08-26 23:59:59".

                     * 
                     */
                    std::string GetCreateTimeTo() const;

                    /**
                     * 设置End time of the Alarm rule creation time range, in the format of "2025-08-26 23:59:59".

                     * @param _createTimeTo End time of the Alarm rule creation time range, in the format of "2025-08-26 23:59:59".

                     * 
                     */
                    void SetCreateTimeTo(const std::string& _createTimeTo);

                    /**
                     * 判断参数 CreateTimeTo 是否已赋值
                     * @return CreateTimeTo 是否已赋值
                     * 
                     */
                    bool CreateTimeToHasBeenSet() const;

                    /**
                     * 获取Filters Alarm rules by last update time, in the format of "2025-08-26 00:00:00".

                     * @return UpdateTimeFrom Filters Alarm rules by last update time, in the format of "2025-08-26 00:00:00".

                     * 
                     */
                    std::string GetUpdateTimeFrom() const;

                    /**
                     * 设置Filters Alarm rules by last update time, in the format of "2025-08-26 00:00:00".

                     * @param _updateTimeFrom Filters Alarm rules by last update time, in the format of "2025-08-26 00:00:00".

                     * 
                     */
                    void SetUpdateTimeFrom(const std::string& _updateTimeFrom);

                    /**
                     * 判断参数 UpdateTimeFrom 是否已赋值
                     * @return UpdateTimeFrom 是否已赋值
                     * 
                     */
                    bool UpdateTimeFromHasBeenSet() const;

                    /**
                     * 获取Filters Alarm rules by last update time in the format of "2025-08-26 23:59:59".

                     * @return UpdateTimeTo Filters Alarm rules by last update time in the format of "2025-08-26 23:59:59".

                     * 
                     */
                    std::string GetUpdateTimeTo() const;

                    /**
                     * 设置Filters Alarm rules by last update time in the format of "2025-08-26 23:59:59".

                     * @param _updateTimeTo Filters Alarm rules by last update time in the format of "2025-08-26 23:59:59".

                     * 
                     */
                    void SetUpdateTimeTo(const std::string& _updateTimeTo);

                    /**
                     * 判断参数 UpdateTimeTo 是否已赋值
                     * @return UpdateTimeTo 是否已赋值
                     * 
                     */
                    bool UpdateTimeToHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Page number for pagination. defaults to 1.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items to display per page, defaults to 20, minimum value 1, maximum value 200.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

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
                     * Based on task id, queries Alarm rules.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

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
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * Queries Alarm rules configured with corresponding Alarm levels.
Valid values: 1. ordinary, 2. important, 3. critical.
                     */
                    int64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Query the alarm rules associated with the configured alarm recipients.
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * Queries the corresponding Alarm rule based on Alarm rule id or rule name.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Specifies the creator filter for Alarm rule creation.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Start time of the Alarm rule create time range, in the format of 2025-08-17 00:00:00.
                     */
                    std::string m_createTimeFrom;
                    bool m_createTimeFromHasBeenSet;

                    /**
                     * End time of the Alarm rule creation time range, in the format of "2025-08-26 23:59:59".

                     */
                    std::string m_createTimeTo;
                    bool m_createTimeToHasBeenSet;

                    /**
                     * Filters Alarm rules by last update time, in the format of "2025-08-26 00:00:00".

                     */
                    std::string m_updateTimeFrom;
                    bool m_updateTimeFromHasBeenSet;

                    /**
                     * Filters Alarm rules by last update time in the format of "2025-08-26 23:59:59".

                     */
                    std::string m_updateTimeTo;
                    bool m_updateTimeToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSALARMRULESREQUEST_H_
