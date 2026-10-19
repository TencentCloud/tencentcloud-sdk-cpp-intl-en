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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDALARMPOLICYREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDALARMPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AddAlarmPolicy request structure.
                */
                class AddAlarmPolicyRequest : public AbstractModel
                {
                public:
                    AddAlarmPolicyRequest();
                    ~AddAlarmPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Alarm policy name</p>
                     * @return Name <p>Alarm policy name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Alarm policy name</p>
                     * @param _name <p>Alarm policy name</p>
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
                     * 获取<p>Event type 1: Resource non-compliance event.</p>
                     * @return Type <p>Event type 1: Resource non-compliance event.</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Event type 1: Resource non-compliance event.</p>
                     * @param _type <p>Event type 1: Resource non-compliance event.</p>
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
                     * 获取<p>Event range. Valid values: 1 (current account) and 2 (multi-account).</p>
                     * @return EventScope <p>Event range. Valid values: 1 (current account) and 2 (multi-account).</p>
                     * 
                     */
                    std::vector<int64_t> GetEventScope() const;

                    /**
                     * 设置<p>Event range. Valid values: 1 (current account) and 2 (multi-account).</p>
                     * @param _eventScope <p>Event range. Valid values: 1 (current account) and 2 (multi-account).</p>
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
                     * 获取<p>Risk level. 1: high-risk 2: medium-risk 3: low risk</p>
                     * @return RiskLevel <p>Risk level. 1: high-risk 2: medium-risk 3: low risk</p>
                     * 
                     */
                    std::vector<int64_t> GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level. 1: high-risk 2: medium-risk 3: low risk</p>
                     * @param _riskLevel <p>Risk level. 1: high-risk 2: medium-risk 3: low risk</p>
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
                     * 获取<p>Notification period</p>
                     * @return NoticeTime <p>Notification period</p>
                     * 
                     */
                    std::string GetNoticeTime() const;

                    /**
                     * 设置<p>Notification period</p>
                     * @param _noticeTime <p>Notification period</p>
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
                     * 获取<p>Notification mechanism</p>
                     * @return NotificationMechanism <p>Notification mechanism</p>
                     * 
                     */
                    std::string GetNotificationMechanism() const;

                    /**
                     * 设置<p>Notification mechanism</p>
                     * @param _notificationMechanism <p>Notification mechanism</p>
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
                     * 获取<p>Status. Valid values: 1 (enabled) and 2 (disabled).</p>
                     * @return Status <p>Status. Valid values: 1 (enabled) and 2 (disabled).</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Status. Valid values: 1 (enabled) and 2 (disabled).</p>
                     * @param _status <p>Status. Valid values: 1 (enabled) and 2 (disabled).</p>
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
                     * 获取<p>Notification cycle</p>
                     * @return NoticePeriod <p>Notification cycle</p>
                     * 
                     */
                    std::vector<int64_t> GetNoticePeriod() const;

                    /**
                     * 设置<p>Notification cycle</p>
                     * @param _noticePeriod <p>Notification cycle</p>
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
                     * 获取<p>Policy description</p>
                     * @return Description <p>Policy description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Policy description</p>
                     * @param _description <p>Policy description</p>
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
                     * <p>Alarm policy name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Event type 1: Resource non-compliance event.</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Event range. Valid values: 1 (current account) and 2 (multi-account).</p>
                     */
                    std::vector<int64_t> m_eventScope;
                    bool m_eventScopeHasBeenSet;

                    /**
                     * <p>Risk level. 1: high-risk 2: medium-risk 3: low risk</p>
                     */
                    std::vector<int64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Notification period</p>
                     */
                    std::string m_noticeTime;
                    bool m_noticeTimeHasBeenSet;

                    /**
                     * <p>Notification mechanism</p>
                     */
                    std::string m_notificationMechanism;
                    bool m_notificationMechanismHasBeenSet;

                    /**
                     * <p>Status. Valid values: 1 (enabled) and 2 (disabled).</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Notification cycle</p>
                     */
                    std::vector<int64_t> m_noticePeriod;
                    bool m_noticePeriodHasBeenSet;

                    /**
                     * <p>Policy description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDALARMPOLICYREQUEST_H_
