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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMNOTICEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMNOTICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/UserNotice.h>
#include <tencentcloud/monitor/v20180724/model/URLNotice.h>
#include <tencentcloud/monitor/v20180724/model/CLSNotice.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
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
                     * 获取Module name. Enter "monitor" here
                     * @return Module Module name. Enter "monitor" here
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Module name. Enter "monitor" here
                     * @param _module Module name. Enter "monitor" here
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Alarm notification rule name, which can contain up to 60 characters
                     * @return Name Alarm notification rule name, which can contain up to 60 characters
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm notification rule name, which can contain up to 60 characters
                     * @param _name Alarm notification rule name, which can contain up to 60 characters
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
                     * 获取Notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
                     * @return NoticeType Notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
                     * 
                     */
                    std::string GetNoticeType() const;

                    /**
                     * 设置Notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
                     * @param _noticeType Notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
                     * 
                     */
                    void SetNoticeType(const std::string& _noticeType);

                    /**
                     * 判断参数 NoticeType 是否已赋值
                     * @return NoticeType 是否已赋值
                     * 
                     */
                    bool NoticeTypeHasBeenSet() const;

                    /**
                     * 获取Notification language. Valid values: zh-CN (Chinese), en-US (English)
                     * @return NoticeLanguage Notification language. Valid values: zh-CN (Chinese), en-US (English)
                     * 
                     */
                    std::string GetNoticeLanguage() const;

                    /**
                     * 设置Notification language. Valid values: zh-CN (Chinese), en-US (English)
                     * @param _noticeLanguage Notification language. Valid values: zh-CN (Chinese), en-US (English)
                     * 
                     */
                    void SetNoticeLanguage(const std::string& _noticeLanguage);

                    /**
                     * 判断参数 NoticeLanguage 是否已赋值
                     * @return NoticeLanguage 是否已赋值
                     * 
                     */
                    bool NoticeLanguageHasBeenSet() const;

                    /**
                     * 获取Alarm notification template ID
                     * @return NoticeId Alarm notification template ID
                     * 
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置Alarm notification template ID
                     * @param _noticeId Alarm notification template ID
                     * 
                     */
                    void SetNoticeId(const std::string& _noticeId);

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     * 
                     */
                    bool NoticeIdHasBeenSet() const;

                    /**
                     * 获取User notifications (up to 5)
                     * @return UserNotices User notifications (up to 5)
                     * 
                     */
                    std::vector<UserNotice> GetUserNotices() const;

                    /**
                     * 设置User notifications (up to 5)
                     * @param _userNotices User notifications (up to 5)
                     * 
                     */
                    void SetUserNotices(const std::vector<UserNotice>& _userNotices);

                    /**
                     * 判断参数 UserNotices 是否已赋值
                     * @return UserNotices 是否已赋值
                     * 
                     */
                    bool UserNoticesHasBeenSet() const;

                    /**
                     * 获取Callback notifications (up to 3)
                     * @return URLNotices Callback notifications (up to 3)
                     * 
                     */
                    std::vector<URLNotice> GetURLNotices() const;

                    /**
                     * 设置Callback notifications (up to 3)
                     * @param _uRLNotices Callback notifications (up to 3)
                     * 
                     */
                    void SetURLNotices(const std::vector<URLNotice>& _uRLNotices);

                    /**
                     * 判断参数 URLNotices 是否已赋值
                     * @return URLNotices 是否已赋值
                     * 
                     */
                    bool URLNoticesHasBeenSet() const;

                    /**
                     * 获取The operation of pushing alarm notifications to CLS. Up to one CLS log topic can be configured.
                     * @return CLSNotices The operation of pushing alarm notifications to CLS. Up to one CLS log topic can be configured.
                     * 
                     */
                    std::vector<CLSNotice> GetCLSNotices() const;

                    /**
                     * 设置The operation of pushing alarm notifications to CLS. Up to one CLS log topic can be configured.
                     * @param _cLSNotices The operation of pushing alarm notifications to CLS. Up to one CLS log topic can be configured.
                     * 
                     */
                    void SetCLSNotices(const std::vector<CLSNotice>& _cLSNotices);

                    /**
                     * 判断参数 CLSNotices 是否已赋值
                     * @return CLSNotices 是否已赋值
                     * 
                     */
                    bool CLSNoticesHasBeenSet() const;

                    /**
                     * 获取List of IDs of the alerting rules bound to an alarm notification template
                     * @return PolicyIds List of IDs of the alerting rules bound to an alarm notification template
                     * 
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置List of IDs of the alerting rules bound to an alarm notification template
                     * @param _policyIds List of IDs of the alerting rules bound to an alarm notification template
                     * 
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                private:

                    /**
                     * Module name. Enter "monitor" here
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Alarm notification rule name, which can contain up to 60 characters
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
                     */
                    std::string m_noticeType;
                    bool m_noticeTypeHasBeenSet;

                    /**
                     * Notification language. Valid values: zh-CN (Chinese), en-US (English)
                     */
                    std::string m_noticeLanguage;
                    bool m_noticeLanguageHasBeenSet;

                    /**
                     * Alarm notification template ID
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * User notifications (up to 5)
                     */
                    std::vector<UserNotice> m_userNotices;
                    bool m_userNoticesHasBeenSet;

                    /**
                     * Callback notifications (up to 3)
                     */
                    std::vector<URLNotice> m_uRLNotices;
                    bool m_uRLNoticesHasBeenSet;

                    /**
                     * The operation of pushing alarm notifications to CLS. Up to one CLS log topic can be configured.
                     */
                    std::vector<CLSNotice> m_cLSNotices;
                    bool m_cLSNoticesHasBeenSet;

                    /**
                     * List of IDs of the alerting rules bound to an alarm notification template
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMNOTICEREQUEST_H_
