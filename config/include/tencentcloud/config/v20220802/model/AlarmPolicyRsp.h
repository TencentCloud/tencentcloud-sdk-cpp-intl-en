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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_ALARMPOLICYRSP_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_ALARMPOLICYRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Structure of a single alarm policy record.
                */
                class AlarmPolicyRsp : public AbstractModel
                {
                public:
                    AlarmPolicyRsp();
                    ~AlarmPolicyRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique alarm policy ID.
                     * @return AlarmPolicyId Unique alarm policy ID.
                     * 
                     */
                    uint64_t GetAlarmPolicyId() const;

                    /**
                     * 设置Unique alarm policy ID.
                     * @param _alarmPolicyId Unique alarm policy ID.
                     * 
                     */
                    void SetAlarmPolicyId(const uint64_t& _alarmPolicyId);

                    /**
                     * 判断参数 AlarmPolicyId 是否已赋值
                     * @return AlarmPolicyId 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdHasBeenSet() const;

                    /**
                     * 获取Policy name.
                     * @return Name Policy name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy name.
                     * @param _name Policy name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Event type
                     * @return Type Event type
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Event type
                     * @param _type Event type
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Valid values: 1 (current account) and 2 (multi-account).
                     * @return EventScope Valid values: 1 (current account) and 2 (multi-account).
                     * 
                     */
                    std::vector<int64_t> GetEventScope() const;

                    /**
                     * 设置Valid values: 1 (current account) and 2 (multi-account).
                     * @param _eventScope Valid values: 1 (current account) and 2 (multi-account).
                     * 
                     */
                    void SetEventScope(const std::vector<int64_t>& _eventScope);

                    /**
                     * 判断参数 EventScope 是否已赋值
                     * @return EventScope 是否已赋值
                     * 
                     */
                    bool EventScopeHasBeenSet() const;

                    /**
                     * 获取Valid values: 1 (high risk), 2 (medium risk), and 3 (low risk).
                     * @return RiskLevel Valid values: 1 (high risk), 2 (medium risk), and 3 (low risk).
                     * 
                     */
                    std::vector<int64_t> GetRiskLevel() const;

                    /**
                     * 设置Valid values: 1 (high risk), 2 (medium risk), and 3 (low risk).
                     * @param _riskLevel Valid values: 1 (high risk), 2 (medium risk), and 3 (low risk).
                     * 
                     */
                    void SetRiskLevel(const std::vector<int64_t>& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Notification cycle. Value range: 1 to 7, representing Monday to Sunday respectively.
                     * @return NoticePeriod Notification cycle. Value range: 1 to 7, representing Monday to Sunday respectively.
                     * 
                     */
                    std::vector<int64_t> GetNoticePeriod() const;

                    /**
                     * 设置Notification cycle. Value range: 1 to 7, representing Monday to Sunday respectively.
                     * @param _noticePeriod Notification cycle. Value range: 1 to 7, representing Monday to Sunday respectively.
                     * 
                     */
                    void SetNoticePeriod(const std::vector<int64_t>& _noticePeriod);

                    /**
                     * 判断参数 NoticePeriod 是否已赋值
                     * @return NoticePeriod 是否已赋值
                     * 
                     */
                    bool NoticePeriodHasBeenSet() const;

                    /**
                     * 获取Notification period
                     * @return NoticeTime Notification period
                     * 
                     */
                    std::string GetNoticeTime() const;

                    /**
                     * 设置Notification period
                     * @param _noticeTime Notification period
                     * 
                     */
                    void SetNoticeTime(const std::string& _noticeTime);

                    /**
                     * 判断参数 NoticeTime 是否已赋值
                     * @return NoticeTime 是否已赋值
                     * 
                     */
                    bool NoticeTimeHasBeenSet() const;

                    /**
                     * 获取Notification mechanism
                     * @return NotificationMechanism Notification mechanism
                     * 
                     */
                    std::string GetNotificationMechanism() const;

                    /**
                     * 设置Notification mechanism
                     * @param _notificationMechanism Notification mechanism
                     * 
                     */
                    void SetNotificationMechanism(const std::string& _notificationMechanism);

                    /**
                     * 判断参数 NotificationMechanism 是否已赋值
                     * @return NotificationMechanism 是否已赋值
                     * 
                     */
                    bool NotificationMechanismHasBeenSet() const;

                    /**
                     * 获取Policy status. Valid values: 1 (enabled) and 2 (disabled).
                     * @return Status Policy status. Valid values: 1 (enabled) and 2 (disabled).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Policy status. Valid values: 1 (enabled) and 2 (disabled).
                     * @param _status Policy status. Valid values: 1 (enabled) and 2 (disabled).
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
                     * 获取Policy description
                     * @return Description Policy description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Policy description
                     * @param _description Policy description
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
                     * Unique alarm policy ID.
                     */
                    uint64_t m_alarmPolicyId;
                    bool m_alarmPolicyIdHasBeenSet;

                    /**
                     * Policy name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Event type
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Valid values: 1 (current account) and 2 (multi-account).
                     */
                    std::vector<int64_t> m_eventScope;
                    bool m_eventScopeHasBeenSet;

                    /**
                     * Valid values: 1 (high risk), 2 (medium risk), and 3 (low risk).
                     */
                    std::vector<int64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Notification cycle. Value range: 1 to 7, representing Monday to Sunday respectively.
                     */
                    std::vector<int64_t> m_noticePeriod;
                    bool m_noticePeriodHasBeenSet;

                    /**
                     * Notification period
                     */
                    std::string m_noticeTime;
                    bool m_noticeTimeHasBeenSet;

                    /**
                     * Notification mechanism
                     */
                    std::string m_notificationMechanism;
                    bool m_notificationMechanismHasBeenSet;

                    /**
                     * Policy status. Valid values: 1 (enabled) and 2 (disabled).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Policy description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_ALARMPOLICYRSP_H_
