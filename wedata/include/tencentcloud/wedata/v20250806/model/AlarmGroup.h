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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMGROUP_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/NotificationFatigue.h>
#include <tencentcloud/wedata/v20250806/model/AlarmWayWebHook.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Alarm rule recipient configuration.
                */
                class AlarmGroup : public AbstractModel
                {
                public:
                    AlarmGroup();
                    ~AlarmGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the list of Alarm escalation recipient ids.
If the Alarm recipient or supervisor does not confirm the Alarm within the Alarm interval, an Alarm will be sent to the next-level superior.
                     * @return AlarmEscalationRecipientIds Specifies the list of Alarm escalation recipient ids.
If the Alarm recipient or supervisor does not confirm the Alarm within the Alarm interval, an Alarm will be sent to the next-level superior.
                     * 
                     */
                    std::vector<std::string> GetAlarmEscalationRecipientIds() const;

                    /**
                     * 设置Specifies the list of Alarm escalation recipient ids.
If the Alarm recipient or supervisor does not confirm the Alarm within the Alarm interval, an Alarm will be sent to the next-level superior.
                     * @param _alarmEscalationRecipientIds Specifies the list of Alarm escalation recipient ids.
If the Alarm recipient or supervisor does not confirm the Alarm within the Alarm interval, an Alarm will be sent to the next-level superior.
                     * 
                     */
                    void SetAlarmEscalationRecipientIds(const std::vector<std::string>& _alarmEscalationRecipientIds);

                    /**
                     * 判断参数 AlarmEscalationRecipientIds 是否已赋值
                     * @return AlarmEscalationRecipientIds 是否已赋值
                     * 
                     */
                    bool AlarmEscalationRecipientIdsHasBeenSet() const;

                    /**
                     * 获取Escalation interval for alarms.
                     * @return AlarmEscalationInterval Escalation interval for alarms.
                     * 
                     */
                    int64_t GetAlarmEscalationInterval() const;

                    /**
                     * 设置Escalation interval for alarms.
                     * @param _alarmEscalationInterval Escalation interval for alarms.
                     * 
                     */
                    void SetAlarmEscalationInterval(const int64_t& _alarmEscalationInterval);

                    /**
                     * 判断参数 AlarmEscalationInterval 是否已赋值
                     * @return AlarmEscalationInterval 是否已赋值
                     * 
                     */
                    bool AlarmEscalationIntervalHasBeenSet() const;

                    /**
                     * 获取Alarm notification fatigue configuration.
                     * @return NotificationFatigue Alarm notification fatigue configuration.
                     * 
                     */
                    NotificationFatigue GetNotificationFatigue() const;

                    /**
                     * 设置Alarm notification fatigue configuration.
                     * @param _notificationFatigue Alarm notification fatigue configuration.
                     * 
                     */
                    void SetNotificationFatigue(const NotificationFatigue& _notificationFatigue);

                    /**
                     * 判断参数 NotificationFatigue 是否已赋值
                     * @return NotificationFatigue 是否已赋值
                     * 
                     */
                    bool NotificationFatigueHasBeenSet() const;

                    /**
                     * 获取Alarm channel. valid values: 1. mail, 2. sms, 3. wechat, 4. voice, 5. wecom, 6. Http, 7. wecom group, 8. lark group, 9. dingtalk group, 10. Slack group, 11. Teams group (default: 1. mail). only select one channel.
                     * @return AlarmWays Alarm channel. valid values: 1. mail, 2. sms, 3. wechat, 4. voice, 5. wecom, 6. Http, 7. wecom group, 8. lark group, 9. dingtalk group, 10. Slack group, 11. Teams group (default: 1. mail). only select one channel.
                     * 
                     */
                    std::vector<std::string> GetAlarmWays() const;

                    /**
                     * 设置Alarm channel. valid values: 1. mail, 2. sms, 3. wechat, 4. voice, 5. wecom, 6. Http, 7. wecom group, 8. lark group, 9. dingtalk group, 10. Slack group, 11. Teams group (default: 1. mail). only select one channel.
                     * @param _alarmWays Alarm channel. valid values: 1. mail, 2. sms, 3. wechat, 4. voice, 5. wecom, 6. Http, 7. wecom group, 8. lark group, 9. dingtalk group, 10. Slack group, 11. Teams group (default: 1. mail). only select one channel.
                     * 
                     */
                    void SetAlarmWays(const std::vector<std::string>& _alarmWays);

                    /**
                     * 判断参数 AlarmWays 是否已赋值
                     * @return AlarmWays 是否已赋值
                     * 
                     */
                    bool AlarmWaysHasBeenSet() const;

                    /**
                     * 获取webhook url list for wecom group/lark group/dingtalk group/Slack group/Teams group.
                     * @return WebHooks webhook url list for wecom group/lark group/dingtalk group/Slack group/Teams group.
                     * 
                     */
                    std::vector<AlarmWayWebHook> GetWebHooks() const;

                    /**
                     * 设置webhook url list for wecom group/lark group/dingtalk group/Slack group/Teams group.
                     * @param _webHooks webhook url list for wecom group/lark group/dingtalk group/Slack group/Teams group.
                     * 
                     */
                    void SetWebHooks(const std::vector<AlarmWayWebHook>& _webHooks);

                    /**
                     * 判断参数 WebHooks 是否已赋值
                     * @return WebHooks 是否已赋值
                     * 
                     */
                    bool WebHooksHasBeenSet() const;

                    /**
                     * 获取Alarm recipient type: 1. specified personnel, 2. task owner, 3. duty schedule (default: 1. specified personnel).
                     * @return AlarmRecipientType Alarm recipient type: 1. specified personnel, 2. task owner, 3. duty schedule (default: 1. specified personnel).
                     * 
                     */
                    int64_t GetAlarmRecipientType() const;

                    /**
                     * 设置Alarm recipient type: 1. specified personnel, 2. task owner, 3. duty schedule (default: 1. specified personnel).
                     * @param _alarmRecipientType Alarm recipient type: 1. specified personnel, 2. task owner, 3. duty schedule (default: 1. specified personnel).
                     * 
                     */
                    void SetAlarmRecipientType(const int64_t& _alarmRecipientType);

                    /**
                     * 判断参数 AlarmRecipientType 是否已赋值
                     * @return AlarmRecipientType 是否已赋值
                     * 
                     */
                    bool AlarmRecipientTypeHasBeenSet() const;

                    /**
                     * 获取Specifies different business ids based on AlarmRecipientType. valid values: 1 (designated personnel): Alarm recipient id list. 2 (task owner): no configuration required. 3 (duty schedule): schedule id list.
                     * @return AlarmRecipientIds Specifies different business ids based on AlarmRecipientType. valid values: 1 (designated personnel): Alarm recipient id list. 2 (task owner): no configuration required. 3 (duty schedule): schedule id list.
                     * 
                     */
                    std::vector<std::string> GetAlarmRecipientIds() const;

                    /**
                     * 设置Specifies different business ids based on AlarmRecipientType. valid values: 1 (designated personnel): Alarm recipient id list. 2 (task owner): no configuration required. 3 (duty schedule): schedule id list.
                     * @param _alarmRecipientIds Specifies different business ids based on AlarmRecipientType. valid values: 1 (designated personnel): Alarm recipient id list. 2 (task owner): no configuration required. 3 (duty schedule): schedule id list.
                     * 
                     */
                    void SetAlarmRecipientIds(const std::vector<std::string>& _alarmRecipientIds);

                    /**
                     * 判断参数 AlarmRecipientIds 是否已赋值
                     * @return AlarmRecipientIds 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdsHasBeenSet() const;

                private:

                    /**
                     * Specifies the list of Alarm escalation recipient ids.
If the Alarm recipient or supervisor does not confirm the Alarm within the Alarm interval, an Alarm will be sent to the next-level superior.
                     */
                    std::vector<std::string> m_alarmEscalationRecipientIds;
                    bool m_alarmEscalationRecipientIdsHasBeenSet;

                    /**
                     * Escalation interval for alarms.
                     */
                    int64_t m_alarmEscalationInterval;
                    bool m_alarmEscalationIntervalHasBeenSet;

                    /**
                     * Alarm notification fatigue configuration.
                     */
                    NotificationFatigue m_notificationFatigue;
                    bool m_notificationFatigueHasBeenSet;

                    /**
                     * Alarm channel. valid values: 1. mail, 2. sms, 3. wechat, 4. voice, 5. wecom, 6. Http, 7. wecom group, 8. lark group, 9. dingtalk group, 10. Slack group, 11. Teams group (default: 1. mail). only select one channel.
                     */
                    std::vector<std::string> m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * webhook url list for wecom group/lark group/dingtalk group/Slack group/Teams group.
                     */
                    std::vector<AlarmWayWebHook> m_webHooks;
                    bool m_webHooksHasBeenSet;

                    /**
                     * Alarm recipient type: 1. specified personnel, 2. task owner, 3. duty schedule (default: 1. specified personnel).
                     */
                    int64_t m_alarmRecipientType;
                    bool m_alarmRecipientTypeHasBeenSet;

                    /**
                     * Specifies different business ids based on AlarmRecipientType. valid values: 1 (designated personnel): Alarm recipient id list. 2 (task owner): no configuration required. 3 (duty schedule): schedule id list.
                     */
                    std::vector<std::string> m_alarmRecipientIds;
                    bool m_alarmRecipientIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMGROUP_H_
