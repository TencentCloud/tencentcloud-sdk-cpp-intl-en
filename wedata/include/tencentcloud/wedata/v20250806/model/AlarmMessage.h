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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMMESSAGE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMMESSAGE_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Alarm information.
                */
                class AlarmMessage : public AbstractModel
                {
                public:
                    AlarmMessage();
                    ~AlarmMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm message Id.
                     * @return AlarmMessageId Alarm message Id.
                     * 
                     */
                    uint64_t GetAlarmMessageId() const;

                    /**
                     * 设置Alarm message Id.
                     * @param _alarmMessageId Alarm message Id.
                     * 
                     */
                    void SetAlarmMessageId(const uint64_t& _alarmMessageId);

                    /**
                     * 判断参数 AlarmMessageId 是否已赋值
                     * @return AlarmMessageId 是否已赋值
                     * 
                     */
                    bool AlarmMessageIdHasBeenSet() const;

                    /**
                     * 获取Alarm time. the same Alarm may be sent multiple times, only the latest Alarm time is displayed.
                     * @return AlarmTime Alarm time. the same Alarm may be sent multiple times, only the latest Alarm time is displayed.
                     * 
                     */
                    std::string GetAlarmTime() const;

                    /**
                     * 设置Alarm time. the same Alarm may be sent multiple times, only the latest Alarm time is displayed.
                     * @param _alarmTime Alarm time. the same Alarm may be sent multiple times, only the latest Alarm time is displayed.
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
                     * 获取Task name.
                     * @return TaskName Task name.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
                     * @param _taskName Task name.
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
                     * 获取Instance data time of the task.
                     * @return CurRunDate Instance data time of the task.
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置Instance data time of the task.
                     * @param _curRunDate Instance data time of the task.
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取Indicates the Alarm cause.
                     * @return AlarmReason Indicates the Alarm cause.
                     * 
                     */
                    std::string GetAlarmReason() const;

                    /**
                     * 设置Indicates the Alarm cause.
                     * @param _alarmReason Indicates the Alarm cause.
                     * 
                     */
                    void SetAlarmReason(const std::string& _alarmReason);

                    /**
                     * 判断参数 AlarmReason 是否已赋值
                     * @return AlarmReason 是否已赋值
                     * 
                     */
                    bool AlarmReasonHasBeenSet() const;

                    /**
                     * 获取Alarm level. 1. ordinary, 2. important, 3. critical.
                     * @return AlarmLevel Alarm level. 1. ordinary, 2. important, 3. critical.
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alarm level. 1. ordinary, 2. important, 3. critical.
                     * @param _alarmLevel Alarm level. 1. ordinary, 2. important, 3. critical.
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
                     * 获取Specifies the Id of the Alarm rule.
                     * @return AlarmRuleId Specifies the Id of the Alarm rule.
                     * 
                     */
                    std::string GetAlarmRuleId() const;

                    /**
                     * 设置Specifies the Id of the Alarm rule.
                     * @param _alarmRuleId Specifies the Id of the Alarm rule.
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
                     * 获取Alarm channel specifies the notification methods: 1. mail, 2. sms, 3. wechat, 4. voice, 5. wecom, 6. Http, 7. wecom group, 8. lark group, 9. dingtalk group, 10. Slack group, 11. Teams group (default: 1. mail).
                     * @return AlarmWays Alarm channel specifies the notification methods: 1. mail, 2. sms, 3. wechat, 4. voice, 5. wecom, 6. Http, 7. wecom group, 8. lark group, 9. dingtalk group, 10. Slack group, 11. Teams group (default: 1. mail).
                     * 
                     */
                    std::vector<std::string> GetAlarmWays() const;

                    /**
                     * 设置Alarm channel specifies the notification methods: 1. mail, 2. sms, 3. wechat, 4. voice, 5. wecom, 6. Http, 7. wecom group, 8. lark group, 9. dingtalk group, 10. Slack group, 11. Teams group (default: 1. mail).
                     * @param _alarmWays Alarm channel specifies the notification methods: 1. mail, 2. sms, 3. wechat, 4. voice, 5. wecom, 6. Http, 7. wecom group, 8. lark group, 9. dingtalk group, 10. Slack group, 11. Teams group (default: 1. mail).
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
                     * 获取Alarm recipient
                     * @return AlarmRecipients Alarm recipient
                     * 
                     */
                    std::vector<std::string> GetAlarmRecipients() const;

                    /**
                     * 设置Alarm recipient
                     * @param _alarmRecipients Alarm recipient
                     * 
                     */
                    void SetAlarmRecipients(const std::vector<std::string>& _alarmRecipients);

                    /**
                     * 判断参数 AlarmRecipients 是否已赋值
                     * @return AlarmRecipients 是否已赋值
                     * 
                     */
                    bool AlarmRecipientsHasBeenSet() const;

                private:

                    /**
                     * Alarm message Id.
                     */
                    uint64_t m_alarmMessageId;
                    bool m_alarmMessageIdHasBeenSet;

                    /**
                     * Alarm time. the same Alarm may be sent multiple times, only the latest Alarm time is displayed.
                     */
                    std::string m_alarmTime;
                    bool m_alarmTimeHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Instance data time of the task.
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * Indicates the Alarm cause.
                     */
                    std::string m_alarmReason;
                    bool m_alarmReasonHasBeenSet;

                    /**
                     * Alarm level. 1. ordinary, 2. important, 3. critical.
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Specifies the Id of the Alarm rule.
                     */
                    std::string m_alarmRuleId;
                    bool m_alarmRuleIdHasBeenSet;

                    /**
                     * Alarm channel specifies the notification methods: 1. mail, 2. sms, 3. wechat, 4. voice, 5. wecom, 6. Http, 7. wecom group, 8. lark group, 9. dingtalk group, 10. Slack group, 11. Teams group (default: 1. mail).
                     */
                    std::vector<std::string> m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * Alarm recipient
                     */
                    std::vector<std::string> m_alarmRecipients;
                    bool m_alarmRecipientsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMMESSAGE_H_
