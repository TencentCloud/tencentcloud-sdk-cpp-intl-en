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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMNOTICEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMNOTICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>
#include <tencentcloud/cls/v20201016/model/NoticeRule.h>
#include <tencentcloud/cls/v20201016/model/DeliverConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateAlarmNotice request structure.
                */
                class CreateAlarmNoticeRequest : public AbstractModel
                {
                public:
                    CreateAlarmNoticeRequest();
                    ~CreateAlarmNoticeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notification channel group name. Supports a maximum of 255 bytes. Does not support '|'.
                     * @return Name Notification channel group name. Supports a maximum of 255 bytes. Does not support '|'.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Notification channel group name. Supports a maximum of 255 bytes. Does not support '|'.
                     * @param _name Notification channel group name. Supports a maximum of 255 bytes. Does not support '|'.
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
                     * 获取Tag description list. By specifying this parameter, you can bind multiple tags to the corresponding notification channel group. A maximum of 50 tag key-value pairs are supported, and there should not be duplicate key-value pairs.
                     * @return Tags Tag description list. By specifying this parameter, you can bind multiple tags to the corresponding notification channel group. A maximum of 50 tag key-value pairs are supported, and there should not be duplicate key-value pairs.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag description list. By specifying this parameter, you can bind multiple tags to the corresponding notification channel group. A maximum of 50 tag key-value pairs are supported, and there should not be duplicate key-value pairs.
                     * @param _tags Tag description list. By specifying this parameter, you can bind multiple tags to the corresponding notification channel group. A maximum of 50 tag key-value pairs are supported, and there should not be duplicate key-value pairs.
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
                     * 获取[Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Alarm types that require sending notifications. Available values:
- Trigger - Alarm trigger
-Alarm Recovery
-All - Alarm trigger and alarm recovery
                     * @return Type [Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Alarm types that require sending notifications. Available values:
- Trigger - Alarm trigger
-Alarm Recovery
-All - Alarm trigger and alarm recovery
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置[Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Alarm types that require sending notifications. Available values:
- Trigger - Alarm trigger
-Alarm Recovery
-All - Alarm trigger and alarm recovery
                     * @param _type [Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Alarm types that require sending notifications. Available values:
- Trigger - Alarm trigger
-Alarm Recovery
-All - Alarm trigger and alarm recovery
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
                     * 获取[Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Notification recipients
                     * @return NoticeReceivers [Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Notification recipients
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置[Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Notification recipients
                     * @param _noticeReceivers [Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Notification recipients
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
                     * 获取[Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Interface callback information (including WeCom, DingTalk, Lark).
                     * @return WebCallbacks [Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Interface callback information (including WeCom, DingTalk, Lark).
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置[Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Interface callback information (including WeCom, DingTalk, Lark).
                     * @param _webCallbacks [Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Interface callback information (including WeCom, DingTalk, Lark).
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
                     * 获取[Advanced mode] (Choose between easy mode and alarm mode, and configure corresponding parameters)
Notification rules.
                     * @return NoticeRules [Advanced mode] (Choose between easy mode and alarm mode, and configure corresponding parameters)
Notification rules.
                     * 
                     */
                    std::vector<NoticeRule> GetNoticeRules() const;

                    /**
                     * 设置[Advanced mode] (Choose between easy mode and alarm mode, and configure corresponding parameters)
Notification rules.
                     * @param _noticeRules [Advanced mode] (Choose between easy mode and alarm mode, and configure corresponding parameters)
Notification rules.
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
                     * 获取Query data link. It should start with http:// or https:// and should not end with /.
                     * @return JumpDomain Query data link. It should start with http:// or https:// and should not end with /.
                     * 
                     */
                    std::string GetJumpDomain() const;

                    /**
                     * 设置Query data link. It should start with http:// or https:// and should not end with /.
                     * @param _jumpDomain Query data link. It should start with http:// or https:// and should not end with /.
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
                     * 获取Delivery log switch. Values are as follows:
1: Off (default value).
2: Enable 
When the delivery log switch is enabled, the DeliverConfig parameter is required.
                     * @return DeliverStatus Delivery log switch. Values are as follows:
1: Off (default value).
2: Enable 
When the delivery log switch is enabled, the DeliverConfig parameter is required.
                     * 
                     */
                    uint64_t GetDeliverStatus() const;

                    /**
                     * 设置Delivery log switch. Values are as follows:
1: Off (default value).
2: Enable 
When the delivery log switch is enabled, the DeliverConfig parameter is required.
                     * @param _deliverStatus Delivery log switch. Values are as follows:
1: Off (default value).
2: Enable 
When the delivery log switch is enabled, the DeliverConfig parameter is required.
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
                     * 获取Log shipping configuration parameter. It is required when DeliverStatus is enabled.
                     * @return DeliverConfig Log shipping configuration parameter. It is required when DeliverStatus is enabled.
                     * 
                     */
                    DeliverConfig GetDeliverConfig() const;

                    /**
                     * 设置Log shipping configuration parameter. It is required when DeliverStatus is enabled.
                     * @param _deliverConfig Log shipping configuration parameter. It is required when DeliverStatus is enabled.
                     * 
                     */
                    void SetDeliverConfig(const DeliverConfig& _deliverConfig);

                    /**
                     * 判断参数 DeliverConfig 是否已赋值
                     * @return DeliverConfig 是否已赋值
                     * 
                     */
                    bool DeliverConfigHasBeenSet() const;

                    /**
                     * 获取Login-free operation alarm switch. Values are as follows:
- 1: disabled.
-2: Enable (default value)
                     * @return AlarmShieldStatus Login-free operation alarm switch. Values are as follows:
- 1: disabled.
-2: Enable (default value)
                     * 
                     */
                    uint64_t GetAlarmShieldStatus() const;

                    /**
                     * 设置Login-free operation alarm switch. Values are as follows:
- 1: disabled.
-2: Enable (default value)
                     * @param _alarmShieldStatus Login-free operation alarm switch. Values are as follows:
- 1: disabled.
-2: Enable (default value)
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
                     * 获取Unify the custom callback parameter settings.
-true: Use the custom callback parameters in the notification content template to override the request header and request body separately configured in the alarm policy.
-false: Prioritize using the request header and request body separately configured in the alarm policy.
                     * @return CallbackPrioritize Unify the custom callback parameter settings.
-true: Use the custom callback parameters in the notification content template to override the request header and request body separately configured in the alarm policy.
-false: Prioritize using the request header and request body separately configured in the alarm policy.
                     * 
                     */
                    bool GetCallbackPrioritize() const;

                    /**
                     * 设置Unify the custom callback parameter settings.
-true: Use the custom callback parameters in the notification content template to override the request header and request body separately configured in the alarm policy.
-false: Prioritize using the request header and request body separately configured in the alarm policy.
                     * @param _callbackPrioritize Unify the custom callback parameter settings.
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
                     * Notification channel group name. Supports a maximum of 255 bytes. Does not support '|'.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Tag description list. By specifying this parameter, you can bind multiple tags to the corresponding notification channel group. A maximum of 50 tag key-value pairs are supported, and there should not be duplicate key-value pairs.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * [Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Alarm types that require sending notifications. Available values:
- Trigger - Alarm trigger
-Alarm Recovery
-All - Alarm trigger and alarm recovery
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * [Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Notification recipients
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * [Easy mode] (Select either easy mode or alarm mode and configure corresponding parameters)
Interface callback information (including WeCom, DingTalk, Lark).
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * [Advanced mode] (Choose between easy mode and alarm mode, and configure corresponding parameters)
Notification rules.
                     */
                    std::vector<NoticeRule> m_noticeRules;
                    bool m_noticeRulesHasBeenSet;

                    /**
                     * Query data link. It should start with http:// or https:// and should not end with /.
                     */
                    std::string m_jumpDomain;
                    bool m_jumpDomainHasBeenSet;

                    /**
                     * Delivery log switch. Values are as follows:
1: Off (default value).
2: Enable 
When the delivery log switch is enabled, the DeliverConfig parameter is required.
                     */
                    uint64_t m_deliverStatus;
                    bool m_deliverStatusHasBeenSet;

                    /**
                     * Log shipping configuration parameter. It is required when DeliverStatus is enabled.
                     */
                    DeliverConfig m_deliverConfig;
                    bool m_deliverConfigHasBeenSet;

                    /**
                     * Login-free operation alarm switch. Values are as follows:
- 1: disabled.
-2: Enable (default value)
                     */
                    uint64_t m_alarmShieldStatus;
                    bool m_alarmShieldStatusHasBeenSet;

                    /**
                     * Unify the custom callback parameter settings.
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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMNOTICEREQUEST_H_
