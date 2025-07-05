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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMNOTICEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMNOTICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>
#include <tencentcloud/cls/v20201016/model/NoticeRule.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyAlarmNotice request structure.
                */
                class ModifyAlarmNoticeRequest : public AbstractModel
                {
                public:
                    ModifyAlarmNoticeRequest();
                    ~ModifyAlarmNoticeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notification group ID
                     * @return AlarmNoticeId Notification group ID
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置Notification group ID
                     * @param _alarmNoticeId Notification group ID
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
                     * 获取Notification group name
                     * @return Name Notification group name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Notification group name
                     * @param _name Notification group name
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
                     * 获取Notification type. Optional Values:
<li> Trigger - Alarm trigger</li>
<li> Recovery - Alarm recovery</li>
<li> All - Alarm triggered and alarm recovery</li>
                     * @return Type Notification type. Optional Values:
<li> Trigger - Alarm trigger</li>
<li> Recovery - Alarm recovery</li>
<li> All - Alarm triggered and alarm recovery</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Notification type. Optional Values:
<li> Trigger - Alarm trigger</li>
<li> Recovery - Alarm recovery</li>
<li> All - Alarm triggered and alarm recovery</li>
                     * @param _type Notification type. Optional Values:
<li> Trigger - Alarm trigger</li>
<li> Recovery - Alarm recovery</li>
<li> All - Alarm triggered and alarm recovery</li>
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
                     * 获取Notification recipient
                     * @return NoticeReceivers Notification recipient
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置Notification recipient
                     * @param _noticeReceivers Notification recipient
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
                     * 获取API callback information (including WeCom)
                     * @return WebCallbacks API callback information (including WeCom)
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置API callback information (including WeCom)
                     * @param _webCallbacks API callback information (including WeCom)
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
                     * 获取Notification rulesNote: - Type, NoticeReceivers, and WebCallbacks are one set of configurations, while NoticeRules is another set of configurations. The two sets are mutually exclusive.- Submitting one set of data will nullify the other set.
                     * @return NoticeRules Notification rulesNote: - Type, NoticeReceivers, and WebCallbacks are one set of configurations, while NoticeRules is another set of configurations. The two sets are mutually exclusive.- Submitting one set of data will nullify the other set.
                     * 
                     */
                    std::vector<NoticeRule> GetNoticeRules() const;

                    /**
                     * 设置Notification rulesNote: - Type, NoticeReceivers, and WebCallbacks are one set of configurations, while NoticeRules is another set of configurations. The two sets are mutually exclusive.- Submitting one set of data will nullify the other set.
                     * @param _noticeRules Notification rulesNote: - Type, NoticeReceivers, and WebCallbacks are one set of configurations, while NoticeRules is another set of configurations. The two sets are mutually exclusive.- Submitting one set of data will nullify the other set.
                     * 
                     */
                    void SetNoticeRules(const std::vector<NoticeRule>& _noticeRules);

                    /**
                     * 判断参数 NoticeRules 是否已赋值
                     * @return NoticeRules 是否已赋值
                     * 
                     */
                    bool NoticeRulesHasBeenSet() const;

                private:

                    /**
                     * Notification group ID
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * Notification group name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Notification type. Optional Values:
<li> Trigger - Alarm trigger</li>
<li> Recovery - Alarm recovery</li>
<li> All - Alarm triggered and alarm recovery</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Notification recipient
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * API callback information (including WeCom)
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * Notification rulesNote: - Type, NoticeReceivers, and WebCallbacks are one set of configurations, while NoticeRules is another set of configurations. The two sets are mutually exclusive.- Submitting one set of data will nullify the other set.
                     */
                    std::vector<NoticeRule> m_noticeRules;
                    bool m_noticeRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMNOTICEREQUEST_H_
