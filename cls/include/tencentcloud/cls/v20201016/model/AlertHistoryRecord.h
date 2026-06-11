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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALERTHISTORYRECORD_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALERTHISTORYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AlertHistoryNotice.h>
#include <tencentcloud/cls/v20201016/model/GroupTriggerConditionInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Alarm record details
                */
                class AlertHistoryRecord : public AbstractModel
                {
                public:
                    AlertHistoryRecord();
                    ~AlertHistoryRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm record ID
                     * @return RecordId Alarm record ID
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Alarm record ID
                     * @param _recordId Alarm record ID
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID
                     * @return AlarmId Alarm policy ID
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置Alarm policy ID
                     * @param _alarmId Alarm policy ID
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
                     * 获取Alarm policy name
                     * @return AlarmName Alarm policy name
                     * 
                     */
                    std::string GetAlarmName() const;

                    /**
                     * 设置Alarm policy name
                     * @param _alarmName Alarm policy name
                     * 
                     */
                    void SetAlarmName(const std::string& _alarmName);

                    /**
                     * 判断参数 AlarmName 是否已赋值
                     * @return AlarmName 是否已赋值
                     * 
                     */
                    bool AlarmNameHasBeenSet() const;

                    /**
                     * 获取ID of the monitored object
                     * @return TopicId ID of the monitored object
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the monitored object
                     * @param _topicId ID of the monitored object
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Name of the monitored object
                     * @return TopicName Name of the monitored object
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Name of the monitored object
                     * @param _topicName Name of the monitored object
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Region of the monitored object
                     * @return Region Region of the monitored object
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the monitored object
                     * @param _region Region of the monitored object
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Trigger condition
                     * @return Trigger Trigger condition
                     * 
                     */
                    std::string GetTrigger() const;

                    /**
                     * 设置Trigger condition
                     * @param _trigger Trigger condition
                     * 
                     */
                    void SetTrigger(const std::string& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取Number of cycles for which the alarm lasts. An alarm will be triggered only after the trigger condition is met for the number of cycles specified by `TriggerCount`.
                     * @return TriggerCount Number of cycles for which the alarm lasts. An alarm will be triggered only after the trigger condition is met for the number of cycles specified by `TriggerCount`.
                     * 
                     */
                    int64_t GetTriggerCount() const;

                    /**
                     * 设置Number of cycles for which the alarm lasts. An alarm will be triggered only after the trigger condition is met for the number of cycles specified by `TriggerCount`.
                     * @param _triggerCount Number of cycles for which the alarm lasts. An alarm will be triggered only after the trigger condition is met for the number of cycles specified by `TriggerCount`.
                     * 
                     */
                    void SetTriggerCount(const int64_t& _triggerCount);

                    /**
                     * 判断参数 TriggerCount 是否已赋值
                     * @return TriggerCount 是否已赋值
                     * 
                     */
                    bool TriggerCountHasBeenSet() const;

                    /**
                     * 获取Alert notification sent frequency, in minutes
                     * @return AlarmPeriod Alert notification sent frequency, in minutes
                     * 
                     */
                    int64_t GetAlarmPeriod() const;

                    /**
                     * 设置Alert notification sent frequency, in minutes
                     * @param _alarmPeriod Alert notification sent frequency, in minutes
                     * 
                     */
                    void SetAlarmPeriod(const int64_t& _alarmPeriod);

                    /**
                     * 判断参数 AlarmPeriod 是否已赋值
                     * @return AlarmPeriod 是否已赋值
                     * 
                     */
                    bool AlarmPeriodHasBeenSet() const;

                    /**
                     * 获取Notification group
                     * @return Notices Notification group
                     * 
                     */
                    std::vector<AlertHistoryNotice> GetNotices() const;

                    /**
                     * 设置Notification group
                     * @param _notices Notification group
                     * 
                     */
                    void SetNotices(const std::vector<AlertHistoryNotice>& _notices);

                    /**
                     * 判断参数 Notices 是否已赋值
                     * @return Notices 是否已赋值
                     * 
                     */
                    bool NoticesHasBeenSet() const;

                    /**
                     * 获取Duration of the alarm in minutes
                     * @return Duration Duration of the alarm in minutes
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Duration of the alarm in minutes
                     * @param _duration Duration of the alarm in minutes
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Alarm status. Valid values: `0` (uncleared), `1` (cleared), `2` (expired)
                     * @return Status Alarm status. Valid values: `0` (uncleared), `1` (cleared), `2` (expired)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Alarm status. Valid values: `0` (uncleared), `1` (cleared), `2` (expired)
                     * @param _status Alarm status. Valid values: `0` (uncleared), `1` (cleared), `2` (expired)
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
                     * 获取Alarm occurrence time, Unix timestamp in milliseconds (ms)
                     * @return CreateTime Alarm occurrence time, Unix timestamp in milliseconds (ms)
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Alarm occurrence time, Unix timestamp in milliseconds (ms)
                     * @param _createTime Alarm occurrence time, Unix timestamp in milliseconds (ms)
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Corresponding group information when alarm grouping is triggered
                     * @return GroupTriggerCondition Corresponding group information when alarm grouping is triggered
                     * 
                     */
                    std::vector<GroupTriggerConditionInfo> GetGroupTriggerCondition() const;

                    /**
                     * 设置Corresponding group information when alarm grouping is triggered
                     * @param _groupTriggerCondition Corresponding group information when alarm grouping is triggered
                     * 
                     */
                    void SetGroupTriggerCondition(const std::vector<GroupTriggerConditionInfo>& _groupTriggerCondition);

                    /**
                     * 判断参数 GroupTriggerCondition 是否已赋值
                     * @return GroupTriggerCondition 是否已赋值
                     * 
                     */
                    bool GroupTriggerConditionHasBeenSet() const;

                    /**
                     * 获取Alarm level. 0: warning (Warn); 1: reminder (Info); 2: urgent (Critical).
                     * @return AlarmLevel Alarm level. 0: warning (Warn); 1: reminder (Info); 2: urgent (Critical).
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alarm level. 0: warning (Warn); 1: reminder (Info); 2: urgent (Critical).
                     * @param _alarmLevel Alarm level. 0: warning (Warn); 1: reminder (Info); 2: urgent (Critical).
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
                     * 获取Monitored object type.
`0`: The same object is specified for all statements. `1`: An object is separately specified for each statement.
                     * @return MonitorObjectType Monitored object type.
`0`: The same object is specified for all statements. `1`: An object is separately specified for each statement.
                     * 
                     */
                    uint64_t GetMonitorObjectType() const;

                    /**
                     * 设置Monitored object type.
`0`: The same object is specified for all statements. `1`: An object is separately specified for each statement.
                     * @param _monitorObjectType Monitored object type.
`0`: The same object is specified for all statements. `1`: An object is separately specified for each statement.
                     * 
                     */
                    void SetMonitorObjectType(const uint64_t& _monitorObjectType);

                    /**
                     * 判断参数 MonitorObjectType 是否已赋值
                     * @return MonitorObjectType 是否已赋值
                     * 
                     */
                    bool MonitorObjectTypeHasBeenSet() const;

                    /**
                     * 获取Notification channel type. 0 represents the internal notification channel of cls. 1 represents the Tencent Cloud observability platform notification channel.
                     * @return SendType Notification channel type. 0 represents the internal notification channel of cls. 1 represents the Tencent Cloud observability platform notification channel.
                     * 
                     */
                    uint64_t GetSendType() const;

                    /**
                     * 设置Notification channel type. 0 represents the internal notification channel of cls. 1 represents the Tencent Cloud observability platform notification channel.
                     * @param _sendType Notification channel type. 0 represents the internal notification channel of cls. 1 represents the Tencent Cloud observability platform notification channel.
                     * 
                     */
                    void SetSendType(const uint64_t& _sendType);

                    /**
                     * 判断参数 SendType 是否已赋值
                     * @return SendType 是否已赋值
                     * 
                     */
                    bool SendTypeHasBeenSet() const;

                private:

                    /**
                     * Alarm record ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Alarm policy ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * Alarm policy name
                     */
                    std::string m_alarmName;
                    bool m_alarmNameHasBeenSet;

                    /**
                     * ID of the monitored object
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Name of the monitored object
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Region of the monitored object
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Trigger condition
                     */
                    std::string m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * Number of cycles for which the alarm lasts. An alarm will be triggered only after the trigger condition is met for the number of cycles specified by `TriggerCount`.
                     */
                    int64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * Alert notification sent frequency, in minutes
                     */
                    int64_t m_alarmPeriod;
                    bool m_alarmPeriodHasBeenSet;

                    /**
                     * Notification group
                     */
                    std::vector<AlertHistoryNotice> m_notices;
                    bool m_noticesHasBeenSet;

                    /**
                     * Duration of the alarm in minutes
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Alarm status. Valid values: `0` (uncleared), `1` (cleared), `2` (expired)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Alarm occurrence time, Unix timestamp in milliseconds (ms)
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Corresponding group information when alarm grouping is triggered
                     */
                    std::vector<GroupTriggerConditionInfo> m_groupTriggerCondition;
                    bool m_groupTriggerConditionHasBeenSet;

                    /**
                     * Alarm level. 0: warning (Warn); 1: reminder (Info); 2: urgent (Critical).
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Monitored object type.
`0`: The same object is specified for all statements. `1`: An object is separately specified for each statement.
                     */
                    uint64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                    /**
                     * Notification channel type. 0 represents the internal notification channel of cls. 1 represents the Tencent Cloud observability platform notification channel.
                     */
                    uint64_t m_sendType;
                    bool m_sendTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALERTHISTORYRECORD_H_
