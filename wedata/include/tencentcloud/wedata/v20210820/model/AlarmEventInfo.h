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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMEVENTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMEVENTINFO_H_

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
                * Alarm Event Details
                */
                class AlarmEventInfo : public AbstractModel
                {
                public:
                    AlarmEventInfo();
                    ~AlarmEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alert ID
                     * @return AlarmId Alert ID
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置Alert ID
                     * @param _alarmId Alert ID
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取Alarm Time
                     * @return AlarmTime Alarm Time
                     * 
                     */
                    std::string GetAlarmTime() const;

                    /**
                     * 设置Alarm Time
                     * @param _alarmTime Alarm Time
                     * 
                     */
                    void SetAlarmTime(const std::string& _alarmTime);

                    /**
                     * 判断参数 AlarmTime 是否已赋值
                     * @return AlarmTime 是否已赋值
                     * 
                     */
                    bool AlarmTimeHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
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
                     * 获取Rule name
                     * @return RegularName Rule name
                     * 
                     */
                    std::string GetRegularName() const;

                    /**
                     * 设置Rule name
                     * @param _regularName Rule name
                     * 
                     */
                    void SetRegularName(const std::string& _regularName);

                    /**
                     * 判断参数 RegularName 是否已赋值
                     * @return RegularName 是否已赋值
                     * 
                     */
                    bool RegularNameHasBeenSet() const;

                    /**
                     * 获取Alert level, 0 for normal, 1 for important, 2 for urgent
                     * @return AlarmLevel Alert level, 0 for normal, 1 for important, 2 for urgent
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alert level, 0 for normal, 1 for important, 2 for urgent
                     * @param _alarmLevel Alert level, 0 for normal, 1 for important, 2 for urgent
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取Alert Method, separated by commas (1: email, 2: SMS, 3: WeChat, 4: voice call, 5: represents WeCom, 6: http)
                     * @return AlarmWay Alert Method, separated by commas (1: email, 2: SMS, 3: WeChat, 4: voice call, 5: represents WeCom, 6: http)
                     * 
                     */
                    uint64_t GetAlarmWay() const;

                    /**
                     * 设置Alert Method, separated by commas (1: email, 2: SMS, 3: WeChat, 4: voice call, 5: represents WeCom, 6: http)
                     * @param _alarmWay Alert Method, separated by commas (1: email, 2: SMS, 3: WeChat, 4: voice call, 5: represents WeCom, 6: http)
                     * 
                     */
                    void SetAlarmWay(const uint64_t& _alarmWay);

                    /**
                     * 判断参数 AlarmWay 是否已赋值
                     * @return AlarmWay 是否已赋值
                     * 
                     */
                    bool AlarmWayHasBeenSet() const;

                    /**
                     * 获取Alert Recipient ID, separated by commas
                     * @return AlarmRecipientId Alert Recipient ID, separated by commas
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置Alert Recipient ID, separated by commas
                     * @param _alarmRecipientId Alert Recipient ID, separated by commas
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
                     * 获取Alert Metrics, 0 for task failure, 1 for task run timeout, 2 for task stop, 3 for task pause
                     * @return AlarmIndicator Alert Metrics, 0 for task failure, 1 for task run timeout, 2 for task stop, 3 for task pause
                     * 
                     */
                    uint64_t GetAlarmIndicator() const;

                    /**
                     * 设置Alert Metrics, 0 for task failure, 1 for task run timeout, 2 for task stop, 3 for task pause
                     * @param _alarmIndicator Alert Metrics, 0 for task failure, 1 for task run timeout, 2 for task stop, 3 for task pause
                     * 
                     */
                    void SetAlarmIndicator(const uint64_t& _alarmIndicator);

                    /**
                     * 判断参数 AlarmIndicator 是否已赋值
                     * @return AlarmIndicator 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorHasBeenSet() const;

                    /**
                     * 获取Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmIndicatorDesc Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAlarmIndicatorDesc() const;

                    /**
                     * 设置Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmIndicatorDesc Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmIndicatorDesc(const std::string& _alarmIndicatorDesc);

                    /**
                     * 判断参数 AlarmIndicatorDesc 是否已赋值
                     * @return AlarmIndicatorDesc 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorDescHasBeenSet() const;

                    /**
                     * 获取Metric threshold, 1 indicates the first run failure of the offline task, 2 indicates failure after all retries of the offline task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TriggerType Metric threshold, 1 indicates the first run failure of the offline task, 2 indicates failure after all retries of the offline task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置Metric threshold, 1 indicates the first run failure of the offline task, 2 indicates failure after all retries of the offline task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _triggerType Metric threshold, 1 indicates the first run failure of the offline task, 2 indicates failure after all retries of the offline task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取Estimated timeout, minute level
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EstimatedTime Estimated timeout, minute level
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetEstimatedTime() const;

                    /**
                     * 设置Estimated timeout, minute level
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _estimatedTime Estimated timeout, minute level
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEstimatedTime(const uint64_t& _estimatedTime);

                    /**
                     * 判断参数 EstimatedTime 是否已赋值
                     * @return EstimatedTime 是否已赋值
                     * 
                     */
                    bool EstimatedTimeHasBeenSet() const;

                    /**
                     * 获取Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceId Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceId Instance IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取0: Partial Success, 1: Complete Success, 2: Complete Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IsSendSuccess 0: Partial Success, 1: Complete Success, 2: Complete Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetIsSendSuccess() const;

                    /**
                     * 设置0: Partial Success, 1: Complete Success, 2: Complete Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _isSendSuccess 0: Partial Success, 1: Complete Success, 2: Complete Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIsSendSuccess(const uint64_t& _isSendSuccess);

                    /**
                     * 判断参数 IsSendSuccess 是否已赋值
                     * @return IsSendSuccess 是否已赋值
                     * 
                     */
                    bool IsSendSuccessHasBeenSet() const;

                    /**
                     * 获取During Do Not Disturb time, 0: No, 1: Yes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InQuitePeriods During Do Not Disturb time, 0: No, 1: Yes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetInQuitePeriods() const;

                    /**
                     * 设置During Do Not Disturb time, 0: No, 1: Yes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inQuitePeriods During Do Not Disturb time, 0: No, 1: Yes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInQuitePeriods(const uint64_t& _inQuitePeriods);

                    /**
                     * 判断参数 InQuitePeriods 是否已赋值
                     * @return InQuitePeriods 是否已赋值
                     * 
                     */
                    bool InQuitePeriodsHasBeenSet() const;

                    /**
                     * 获取Alert Record ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RecordId Alert Record ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置Alert Record ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _recordId Alert Record ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Message ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MessageId Message ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置Message ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _messageId Message ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取Threshold Calculation Operator, 1: Greater than, 2: Less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Operator Threshold Calculation Operator, 1: Greater than, 2: Less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetOperator() const;

                    /**
                     * 设置Threshold Calculation Operator, 1: Greater than, 2: Less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _operator Threshold Calculation Operator, 1: Greater than, 2: Less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperator(const int64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Alert Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RegularId Alert Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegularId() const;

                    /**
                     * 设置Alert Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _regularId Alert Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegularId(const std::string& _regularId);

                    /**
                     * 判断参数 RegularId 是否已赋值
                     * @return RegularId 是否已赋值
                     * 
                     */
                    bool RegularIdHasBeenSet() const;

                    /**
                     * 获取Alert Recipient Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmRecipientName Alert Recipient Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAlarmRecipientName() const;

                    /**
                     * 设置Alert Recipient Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmRecipientName Alert Recipient Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmRecipientName(const std::string& _alarmRecipientName);

                    /**
                     * 判断参数 AlarmRecipientName 是否已赋值
                     * @return AlarmRecipientName 是否已赋值
                     * 
                     */
                    bool AlarmRecipientNameHasBeenSet() const;

                    /**
                     * 获取Alert Task Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskType Alert Task Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Alert Task Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskType Alert Task Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Send Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SendResult Send Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSendResult() const;

                    /**
                     * 设置Send Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sendResult Send Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSendResult(const std::string& _sendResult);

                    /**
                     * 判断参数 SendResult 是否已赋值
                     * @return SendResult 是否已赋值
                     * 
                     */
                    bool SendResultHasBeenSet() const;

                    /**
                     * 获取Monitoring Object ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MonitorObjectId Monitoring Object ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMonitorObjectId() const;

                    /**
                     * 设置Monitoring Object ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _monitorObjectId Monitoring Object ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonitorObjectId(const std::string& _monitorObjectId);

                    /**
                     * 判断参数 MonitorObjectId 是否已赋值
                     * @return MonitorObjectId 是否已赋值
                     * 
                     */
                    bool MonitorObjectIdHasBeenSet() const;

                    /**
                     * 获取Monitoring Object Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MonitorObjectName Monitoring Object Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMonitorObjectName() const;

                    /**
                     * 设置Monitoring Object Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _monitorObjectName Monitoring Object Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonitorObjectName(const std::string& _monitorObjectName);

                    /**
                     * 判断参数 MonitorObjectName 是否已赋值
                     * @return MonitorObjectName 是否已赋值
                     * 
                     */
                    bool MonitorObjectNameHasBeenSet() const;

                    /**
                     * 获取Metric Threshold
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Threshold Metric Threshold
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetThreshold() const;

                    /**
                     * 设置Metric Threshold
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _threshold Metric Threshold
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetThreshold(const double& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * Alert ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * Alarm Time
                     */
                    std::string m_alarmTime;
                    bool m_alarmTimeHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_regularName;
                    bool m_regularNameHasBeenSet;

                    /**
                     * Alert level, 0 for normal, 1 for important, 2 for urgent
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Alert Method, separated by commas (1: email, 2: SMS, 3: WeChat, 4: voice call, 5: represents WeCom, 6: http)
                     */
                    uint64_t m_alarmWay;
                    bool m_alarmWayHasBeenSet;

                    /**
                     * Alert Recipient ID, separated by commas
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Alert Metrics, 0 for task failure, 1 for task run timeout, 2 for task stop, 3 for task pause
                     */
                    uint64_t m_alarmIndicator;
                    bool m_alarmIndicatorHasBeenSet;

                    /**
                     * Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_alarmIndicatorDesc;
                    bool m_alarmIndicatorDescHasBeenSet;

                    /**
                     * Metric threshold, 1 indicates the first run failure of the offline task, 2 indicates failure after all retries of the offline task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Estimated timeout, minute level
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_estimatedTime;
                    bool m_estimatedTimeHasBeenSet;

                    /**
                     * Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 0: Partial Success, 1: Complete Success, 2: Complete Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_isSendSuccess;
                    bool m_isSendSuccessHasBeenSet;

                    /**
                     * During Do Not Disturb time, 0: No, 1: Yes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_inQuitePeriods;
                    bool m_inQuitePeriodsHasBeenSet;

                    /**
                     * Alert Record ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Message ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Threshold Calculation Operator, 1: Greater than, 2: Less than
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Alert Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_regularId;
                    bool m_regularIdHasBeenSet;

                    /**
                     * Alert Recipient Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_alarmRecipientName;
                    bool m_alarmRecipientNameHasBeenSet;

                    /**
                     * Alert Task Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Send Result
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sendResult;
                    bool m_sendResultHasBeenSet;

                    /**
                     * Monitoring Object ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_monitorObjectId;
                    bool m_monitorObjectIdHasBeenSet;

                    /**
                     * Monitoring Object Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_monitorObjectName;
                    bool m_monitorObjectNameHasBeenSet;

                    /**
                     * Metric Threshold
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMEVENTINFO_H_
