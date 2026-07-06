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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_ALARMNOTIFYHISTORY_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_ALARMNOTIFYHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/ChannelsReceivers.h>
#include <tencentcloud/monitor/v20230616/model/NotifyRelatedNotice.h>
#include <tencentcloud/monitor/v20230616/model/AlarmLable.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * Notification history for each alert
                */
                class AlarmNotifyHistory : public AbstractModel
                {
                public:
                    AlarmNotifyHistory();
                    ~AlarmNotifyHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique notification ID.
                     * @return NotifyId Unique notification ID.
                     * 
                     */
                    std::string GetNotifyId() const;

                    /**
                     * 设置Unique notification ID.
                     * @param _notifyId Unique notification ID.
                     * 
                     */
                    void SetNotifyId(const std::string& _notifyId);

                    /**
                     * 判断参数 NotifyId 是否已赋值
                     * @return NotifyId 是否已赋值
                     * 
                     */
                    bool NotifyIdHasBeenSet() const;

                    /**
                     * 获取Alert policy ID
                     * @return PolicyId Alert policy ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Alert policy ID
                     * @param _policyId Alert policy ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Alarm cycle iD
                     * @return SessionId Alarm cycle iD
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Alarm cycle iD
                     * @param _sessionId Alarm cycle iD
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Notification time in Unix timestamp (in seconds).
                     * @return NotifyTime Notification time in Unix timestamp (in seconds).
                     * 
                     */
                    int64_t GetNotifyTime() const;

                    /**
                     * 设置Notification time in Unix timestamp (in seconds).
                     * @param _notifyTime Notification time in Unix timestamp (in seconds).
                     * 
                     */
                    void SetNotifyTime(const int64_t& _notifyTime);

                    /**
                     * 判断参数 NotifyTime 是否已赋值
                     * @return NotifyTime 是否已赋值
                     * 
                     */
                    bool NotifyTimeHasBeenSet() const;

                    /**
                     * 获取Trigger time in Unix timestamp (in seconds).
                     * @return TriggerTime Trigger time in Unix timestamp (in seconds).
                     * 
                     */
                    int64_t GetTriggerTime() const;

                    /**
                     * 设置Trigger time in Unix timestamp (in seconds).
                     * @param _triggerTime Trigger time in Unix timestamp (in seconds).
                     * 
                     */
                    void SetTriggerTime(const int64_t& _triggerTime);

                    /**
                     * 判断参数 TriggerTime 是否已赋值
                     * @return TriggerTime 是否已赋值
                     * 
                     */
                    bool TriggerTimeHasBeenSet() const;

                    /**
                     * 获取Alarm severity level. Valid values: None, Note, Warn, and Serious.
                     * @return TriggerLevel Alarm severity level. Valid values: None, Note, Warn, and Serious.
                     * 
                     */
                    std::string GetTriggerLevel() const;

                    /**
                     * 设置Alarm severity level. Valid values: None, Note, Warn, and Serious.
                     * @param _triggerLevel Alarm severity level. Valid values: None, Note, Warn, and Serious.
                     * 
                     */
                    void SetTriggerLevel(const std::string& _triggerLevel);

                    /**
                     * 判断参数 TriggerLevel 是否已赋值
                     * @return TriggerLevel 是否已赋值
                     * 
                     */
                    bool TriggerLevelHasBeenSet() const;

                    /**
                     * 获取alert content
                     * @return AlarmContent alert content
                     * 
                     */
                    std::string GetAlarmContent() const;

                    /**
                     * 设置alert content
                     * @param _alarmContent alert content
                     * 
                     */
                    void SetAlarmContent(const std::string& _alarmContent);

                    /**
                     * 判断参数 AlarmContent 是否已赋值
                     * @return AlarmContent 是否已赋值
                     * 
                     */
                    bool AlarmContentHasBeenSet() const;

                    /**
                     * 获取Alarm object
                     * @return AlarmObject Alarm object
                     * 
                     */
                    std::string GetAlarmObject() const;

                    /**
                     * 设置Alarm object
                     * @param _alarmObject Alarm object
                     * 
                     */
                    void SetAlarmObject(const std::string& _alarmObject);

                    /**
                     * 判断参数 AlarmObject 是否已赋值
                     * @return AlarmObject 是否已赋值
                     * 
                     */
                    bool AlarmObjectHasBeenSet() const;

                    /**
                     * 获取Alarm notification channel collection involved this time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChannelSet Alarm notification channel collection involved this time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetChannelSet() const;

                    /**
                     * 设置Alarm notification channel collection involved this time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _channelSet Alarm notification channel collection involved this time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChannelSet(const std::vector<std::string>& _channelSet);

                    /**
                     * 判断参数 ChannelSet 是否已赋值
                     * @return ChannelSet 是否已赋值
                     * 
                     */
                    bool ChannelSetHasBeenSet() const;

                    /**
                     * 获取Recipient information of the channel
                     * @return ChannelsReceivers Recipient information of the channel
                     * 
                     */
                    std::vector<ChannelsReceivers> GetChannelsReceivers() const;

                    /**
                     * 设置Recipient information of the channel
                     * @param _channelsReceivers Recipient information of the channel
                     * 
                     */
                    void SetChannelsReceivers(const std::vector<ChannelsReceivers>& _channelsReceivers);

                    /**
                     * 判断参数 ChannelsReceivers 是否已赋值
                     * @return ChannelsReceivers 是否已赋值
                     * 
                     */
                    bool ChannelsReceiversHasBeenSet() const;

                    /**
                     * 获取Alarm policy name
                     * @return PolicyName Alarm policy name
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Alarm policy name
                     * @param _policyName Alarm policy name
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Prometheus Instance ID, valid only when MT_PROME
                     * @return PromeInstanceID Prometheus Instance ID, valid only when MT_PROME
                     * 
                     */
                    std::string GetPromeInstanceID() const;

                    /**
                     * 设置Prometheus Instance ID, valid only when MT_PROME
                     * @param _promeInstanceID Prometheus Instance ID, valid only when MT_PROME
                     * 
                     */
                    void SetPromeInstanceID(const std::string& _promeInstanceID);

                    /**
                     * 判断参数 PromeInstanceID 是否已赋值
                     * @return PromeInstanceID 是否已赋值
                     * 
                     */
                    bool PromeInstanceIDHasBeenSet() const;

                    /**
                     * 获取Region of the Prometheus Instance. Valid at that time only for MT_PROME.
                     * @return PromeInstanceRegion Region of the Prometheus Instance. Valid at that time only for MT_PROME.
                     * 
                     */
                    std::string GetPromeInstanceRegion() const;

                    /**
                     * 设置Region of the Prometheus Instance. Valid at that time only for MT_PROME.
                     * @param _promeInstanceRegion Region of the Prometheus Instance. Valid at that time only for MT_PROME.
                     * 
                     */
                    void SetPromeInstanceRegion(const std::string& _promeInstanceRegion);

                    /**
                     * 判断参数 PromeInstanceRegion 是否已赋值
                     * @return PromeInstanceRegion 是否已赋值
                     * 
                     */
                    bool PromeInstanceRegionHasBeenSet() const;

                    /**
                     * 获取Notification template related configuration information
                     * @return Notices Notification template related configuration information
                     * 
                     */
                    std::vector<NotifyRelatedNotice> GetNotices() const;

                    /**
                     * 设置Notification template related configuration information
                     * @param _notices Notification template related configuration information
                     * 
                     */
                    void SetNotices(const std::vector<NotifyRelatedNotice>& _notices);

                    /**
                     * 判断参数 Notices 是否已赋值
                     * @return Notices 是否已赋值
                     * 
                     */
                    bool NoticesHasBeenSet() const;

                    /**
                     * 获取Alarm trigger status. Valid values: Trigger and Recovery.
                     * @return TriggerStatus Alarm trigger status. Valid values: Trigger and Recovery.
                     * 
                     */
                    std::string GetTriggerStatus() const;

                    /**
                     * 设置Alarm trigger status. Valid values: Trigger and Recovery.
                     * @param _triggerStatus Alarm trigger status. Valid values: Trigger and Recovery.
                     * 
                     */
                    void SetTriggerStatus(const std::string& _triggerStatus);

                    /**
                     * 判断参数 TriggerStatus 是否已赋值
                     * @return TriggerStatus 是否已赋值
                     * 
                     */
                    bool TriggerStatusHasBeenSet() const;

                    /**
                     * 获取Console page address related to the present Prometheus notification history, valid only when MR_PROME
                     * @return PromeConsoleURL Console page address related to the present Prometheus notification history, valid only when MR_PROME
                     * 
                     */
                    std::string GetPromeConsoleURL() const;

                    /**
                     * 设置Console page address related to the present Prometheus notification history, valid only when MR_PROME
                     * @param _promeConsoleURL Console page address related to the present Prometheus notification history, valid only when MR_PROME
                     * 
                     */
                    void SetPromeConsoleURL(const std::string& _promeConsoleURL);

                    /**
                     * 判断参数 PromeConsoleURL 是否已赋值
                     * @return PromeConsoleURL 是否已赋值
                     * 
                     */
                    bool PromeConsoleURLHasBeenSet() const;

                    /**
                     * 获取Alarm label
                     * @return Labels Alarm label
                     * 
                     */
                    std::vector<AlarmLable> GetLabels() const;

                    /**
                     * 设置Alarm label
                     * @param _labels Alarm label
                     * 
                     */
                    void SetLabels(const std::vector<AlarmLable>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * Unique notification ID.
                     */
                    std::string m_notifyId;
                    bool m_notifyIdHasBeenSet;

                    /**
                     * Alert policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Alarm cycle iD
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Notification time in Unix timestamp (in seconds).
                     */
                    int64_t m_notifyTime;
                    bool m_notifyTimeHasBeenSet;

                    /**
                     * Trigger time in Unix timestamp (in seconds).
                     */
                    int64_t m_triggerTime;
                    bool m_triggerTimeHasBeenSet;

                    /**
                     * Alarm severity level. Valid values: None, Note, Warn, and Serious.
                     */
                    std::string m_triggerLevel;
                    bool m_triggerLevelHasBeenSet;

                    /**
                     * alert content
                     */
                    std::string m_alarmContent;
                    bool m_alarmContentHasBeenSet;

                    /**
                     * Alarm object
                     */
                    std::string m_alarmObject;
                    bool m_alarmObjectHasBeenSet;

                    /**
                     * Alarm notification channel collection involved this time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_channelSet;
                    bool m_channelSetHasBeenSet;

                    /**
                     * Recipient information of the channel
                     */
                    std::vector<ChannelsReceivers> m_channelsReceivers;
                    bool m_channelsReceiversHasBeenSet;

                    /**
                     * Alarm policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Prometheus Instance ID, valid only when MT_PROME
                     */
                    std::string m_promeInstanceID;
                    bool m_promeInstanceIDHasBeenSet;

                    /**
                     * Region of the Prometheus Instance. Valid at that time only for MT_PROME.
                     */
                    std::string m_promeInstanceRegion;
                    bool m_promeInstanceRegionHasBeenSet;

                    /**
                     * Notification template related configuration information
                     */
                    std::vector<NotifyRelatedNotice> m_notices;
                    bool m_noticesHasBeenSet;

                    /**
                     * Alarm trigger status. Valid values: Trigger and Recovery.
                     */
                    std::string m_triggerStatus;
                    bool m_triggerStatusHasBeenSet;

                    /**
                     * Console page address related to the present Prometheus notification history, valid only when MR_PROME
                     */
                    std::string m_promeConsoleURL;
                    bool m_promeConsoleURLHasBeenSet;

                    /**
                     * Alarm label
                     */
                    std::vector<AlarmLable> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_ALARMNOTIFYHISTORY_H_
