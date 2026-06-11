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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>
#include <tencentcloud/cls/v20201016/model/NoticeRule.h>
#include <tencentcloud/cls/v20201016/model/AlarmNoticeDeliverConfig.h>
#include <tencentcloud/cls/v20201016/model/AlarmShieldCount.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Alarm notification channel group detailed setting
                */
                class AlarmNotice : public AbstractModel
                {
                public:
                    AlarmNotice();
                    ~AlarmNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm notification channel group name.
                     * @return Name Alarm notification channel group name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm notification channel group name.
                     * @param _name Alarm notification channel group name.
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
                     * 获取Tag information bound to the alarm notification channel group.
                     * @return Tags Tag information bound to the alarm notification channel group.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag information bound to the alarm notification channel group.
                     * @param _tags Tag information bound to the alarm notification channel group.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Alarm template type. Optional values:<br><li> Trigger - Alarm Trigger </li><br><li> Recovery - Alarm Recovery </li><br><li> All - Alarm Trigger and Alarm Recovery </li>
                     * @return Type Alarm template type. Optional values:<br><li> Trigger - Alarm Trigger </li><br><li> Recovery - Alarm Recovery </li><br><li> All - Alarm Trigger and Alarm Recovery </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Alarm template type. Optional values:<br><li> Trigger - Alarm Trigger </li><br><li> Recovery - Alarm Recovery </li><br><li> All - Alarm Trigger and Alarm Recovery </li>
                     * @param _type Alarm template type. Optional values:<br><li> Trigger - Alarm Trigger </li><br><li> Recovery - Alarm Recovery </li><br><li> All - Alarm Trigger and Alarm Recovery </li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Alarm notification template recipient information.
                     * @return NoticeReceivers Alarm notification template recipient information.
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置Alarm notification template recipient information.
                     * @param _noticeReceivers Alarm notification template recipient information.
                     * 
                     */
                    void SetNoticeReceivers(const std::vector<NoticeReceiver>& _noticeReceivers);

                    /**
                     * 判断参数 NoticeReceivers 是否已赋值
                     * @return NoticeReceivers 是否已赋值
                     * 
                     */
                    bool NoticeReceiversHasBeenSet() const;

                    /**
                     * 获取Callback information of alarm notification template.
                     * @return WebCallbacks Callback information of alarm notification template.
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置Callback information of alarm notification template.
                     * @param _webCallbacks Callback information of alarm notification template.
                     * 
                     */
                    void SetWebCallbacks(const std::vector<WebCallback>& _webCallbacks);

                    /**
                     * 判断参数 WebCallbacks 是否已赋值
                     * @return WebCallbacks 是否已赋值
                     * 
                     */
                    bool WebCallbacksHasBeenSet() const;

                    /**
                     * 获取Alarm notification template ID.
                     * @return AlarmNoticeId Alarm notification template ID.
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置Alarm notification template ID.
                     * @param _alarmNoticeId Alarm notification template ID.
                     * 
                     */
                    void SetAlarmNoticeId(const std::string& _alarmNoticeId);

                    /**
                     * 判断参数 AlarmNoticeId 是否已赋值
                     * @return AlarmNoticeId 是否已赋值
                     * 
                     */
                    bool AlarmNoticeIdHasBeenSet() const;

                    /**
                     * 获取Notification rules.
                     * @return NoticeRules Notification rules.
                     * 
                     */
                    std::vector<NoticeRule> GetNoticeRules() const;

                    /**
                     * 设置Notification rules.
                     * @param _noticeRules Notification rules.
                     * 
                     */
                    void SetNoticeRules(const std::vector<NoticeRule>& _noticeRules);

                    /**
                     * 判断参数 NoticeRules 是否已赋值
                     * @return NoticeRules 是否已赋值
                     * 
                     */
                    bool NoticeRulesHasBeenSet() const;

                    /**
                     * 获取Login-free operation alarm switch.
Parameter value: 1: Turn off 2: Turn on (enabled by default)
                     * @return AlarmShieldStatus Login-free operation alarm switch.
Parameter value: 1: Turn off 2: Turn on (enabled by default)
                     * 
                     */
                    uint64_t GetAlarmShieldStatus() const;

                    /**
                     * 设置Login-free operation alarm switch.
Parameter value: 1: Turn off 2: Turn on (enabled by default)
                     * @param _alarmShieldStatus Login-free operation alarm switch.
Parameter value: 1: Turn off 2: Turn on (enabled by default)
                     * 
                     */
                    void SetAlarmShieldStatus(const uint64_t& _alarmShieldStatus);

                    /**
                     * 判断参数 AlarmShieldStatus 是否已赋值
                     * @return AlarmShieldStatus 是否已赋值
                     * 
                     */
                    bool AlarmShieldStatusHasBeenSet() const;

                    /**
                     * 获取Call link domain name. It must start with http:// or https:// and must not end with /.
                     * @return JumpDomain Call link domain name. It must start with http:// or https:// and must not end with /.
                     * 
                     */
                    std::string GetJumpDomain() const;

                    /**
                     * 设置Call link domain name. It must start with http:// or https:// and must not end with /.
                     * @param _jumpDomain Call link domain name. It must start with http:// or https:// and must not end with /.
                     * 
                     */
                    void SetJumpDomain(const std::string& _jumpDomain);

                    /**
                     * 判断参数 JumpDomain 是否已赋值
                     * @return JumpDomain 是否已赋值
                     * 
                     */
                    bool JumpDomainHasBeenSet() const;

                    /**
                     * 获取Shipping-related information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlarmNoticeDeliverConfig Shipping-related information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AlarmNoticeDeliverConfig GetAlarmNoticeDeliverConfig() const;

                    /**
                     * 设置Shipping-related information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alarmNoticeDeliverConfig Shipping-related information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlarmNoticeDeliverConfig(const AlarmNoticeDeliverConfig& _alarmNoticeDeliverConfig);

                    /**
                     * 判断参数 AlarmNoticeDeliverConfig 是否已赋值
                     * @return AlarmNoticeDeliverConfig 是否已赋值
                     * 
                     */
                    bool AlarmNoticeDeliverConfigHasBeenSet() const;

                    /**
                     * 获取Creation time. Format: YYYY-MM-DD HH:MM:SS
                     * @return CreateTime Creation time. Format: YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. Format: YYYY-MM-DD HH:MM:SS
                     * @param _createTime Creation time. Format: YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Latest update time. Format: YYYY-MM-DD HH:MM:SS
                     * @return UpdateTime Latest update time. Format: YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Latest update time. Format: YYYY-MM-DD HH:MM:SS
                     * @param _updateTime Latest update time. Format: YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Delivery log switch.

Parameter value:

1: Disabled

2: enable 

                     * @return DeliverStatus Delivery log switch.

Parameter value:

1: Disabled

2: enable 

                     * 
                     */
                    uint64_t GetDeliverStatus() const;

                    /**
                     * 设置Delivery log switch.

Parameter value:

1: Disabled

2: enable 

                     * @param _deliverStatus Delivery log switch.

Parameter value:

1: Disabled

2: enable 

                     * 
                     */
                    void SetDeliverStatus(const uint64_t& _deliverStatus);

                    /**
                     * 判断参数 DeliverStatus 是否已赋值
                     * @return DeliverStatus 是否已赋值
                     * 
                     */
                    bool DeliverStatusHasBeenSet() const;

                    /**
                     * 获取Delivery log flag.

Parameter value:

1: Disabled

2: Enabled

3: Delivery exception
                     * @return DeliverFlag Delivery log flag.

Parameter value:

1: Disabled

2: Enabled

3: Delivery exception
                     * 
                     */
                    uint64_t GetDeliverFlag() const;

                    /**
                     * 设置Delivery log flag.

Parameter value:

1: Disabled

2: Enabled

3: Delivery exception
                     * @param _deliverFlag Delivery log flag.

Parameter value:

1: Disabled

2: Enabled

3: Delivery exception
                     * 
                     */
                    void SetDeliverFlag(const uint64_t& _deliverFlag);

                    /**
                     * 判断参数 DeliverFlag 是否已赋值
                     * @return DeliverFlag 是否已赋值
                     * 
                     */
                    bool DeliverFlagHasBeenSet() const;

                    /**
                     * 获取Alarm silence status quantity information configured for a notification channel group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlarmShieldCount Alarm silence status quantity information configured for a notification channel group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AlarmShieldCount GetAlarmShieldCount() const;

                    /**
                     * 设置Alarm silence status quantity information configured for a notification channel group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alarmShieldCount Alarm silence status quantity information configured for a notification channel group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlarmShieldCount(const AlarmShieldCount& _alarmShieldCount);

                    /**
                     * 判断参数 AlarmShieldCount 是否已赋值
                     * @return AlarmShieldCount 是否已赋值
                     * 
                     */
                    bool AlarmShieldCountHasBeenSet() const;

                    /**
                     * 获取Unify the setting of custom callback parameters.
-true: Use the custom callback parameters in the notification content template to override the request header and request body separately configured in the alarm policy.
-false: Prioritize using the request header and request body separately configured in the alarm policy.
                     * @return CallbackPrioritize Unify the setting of custom callback parameters.
-true: Use the custom callback parameters in the notification content template to override the request header and request body separately configured in the alarm policy.
-false: Prioritize using the request header and request body separately configured in the alarm policy.
                     * 
                     */
                    bool GetCallbackPrioritize() const;

                    /**
                     * 设置Unify the setting of custom callback parameters.
-true: Use the custom callback parameters in the notification content template to override the request header and request body separately configured in the alarm policy.
-false: Prioritize using the request header and request body separately configured in the alarm policy.
                     * @param _callbackPrioritize Unify the setting of custom callback parameters.
-true: Use the custom callback parameters in the notification content template to override the request header and request body separately configured in the alarm policy.
-false: Prioritize using the request header and request body separately configured in the alarm policy.
                     * 
                     */
                    void SetCallbackPrioritize(const bool& _callbackPrioritize);

                    /**
                     * 判断参数 CallbackPrioritize 是否已赋值
                     * @return CallbackPrioritize 是否已赋值
                     * 
                     */
                    bool CallbackPrioritizeHasBeenSet() const;

                private:

                    /**
                     * Alarm notification channel group name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Tag information bound to the alarm notification channel group.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Alarm template type. Optional values:<br><li> Trigger - Alarm Trigger </li><br><li> Recovery - Alarm Recovery </li><br><li> All - Alarm Trigger and Alarm Recovery </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Alarm notification template recipient information.
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * Callback information of alarm notification template.
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * Alarm notification template ID.
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * Notification rules.
                     */
                    std::vector<NoticeRule> m_noticeRules;
                    bool m_noticeRulesHasBeenSet;

                    /**
                     * Login-free operation alarm switch.
Parameter value: 1: Turn off 2: Turn on (enabled by default)
                     */
                    uint64_t m_alarmShieldStatus;
                    bool m_alarmShieldStatusHasBeenSet;

                    /**
                     * Call link domain name. It must start with http:// or https:// and must not end with /.
                     */
                    std::string m_jumpDomain;
                    bool m_jumpDomainHasBeenSet;

                    /**
                     * Shipping-related information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AlarmNoticeDeliverConfig m_alarmNoticeDeliverConfig;
                    bool m_alarmNoticeDeliverConfigHasBeenSet;

                    /**
                     * Creation time. Format: YYYY-MM-DD HH:MM:SS
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Latest update time. Format: YYYY-MM-DD HH:MM:SS
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Delivery log switch.

Parameter value:

1: Disabled

2: enable 

                     */
                    uint64_t m_deliverStatus;
                    bool m_deliverStatusHasBeenSet;

                    /**
                     * Delivery log flag.

Parameter value:

1: Disabled

2: Enabled

3: Delivery exception
                     */
                    uint64_t m_deliverFlag;
                    bool m_deliverFlagHasBeenSet;

                    /**
                     * Alarm silence status quantity information configured for a notification channel group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AlarmShieldCount m_alarmShieldCount;
                    bool m_alarmShieldCountHasBeenSet;

                    /**
                     * Unify the setting of custom callback parameters.
-true: Use the custom callback parameters in the notification content template to override the request header and request body separately configured in the alarm policy.
-false: Prioritize using the request header and request body separately configured in the alarm policy.
                     */
                    bool m_callbackPrioritize;
                    bool m_callbackPrioritizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICE_H_
