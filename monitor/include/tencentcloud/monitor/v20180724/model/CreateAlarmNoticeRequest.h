/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMNOTICEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMNOTICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/UserNotice.h>
#include <tencentcloud/monitor/v20180724/model/URLNotice.h>
#include <tencentcloud/monitor/v20180724/model/CLSNotice.h>
#include <tencentcloud/monitor/v20180724/model/Tag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
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
                     * 获取Module name. Enter "monitor" here
                     * @return Module Module name. Enter "monitor" here
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Module name. Enter "monitor" here
                     * @param Module Module name. Enter "monitor" here
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Notification template name, which can contain up to 60 characters
                     * @return Name Notification template name, which can contain up to 60 characters
                     */
                    std::string GetName() const;

                    /**
                     * 设置Notification template name, which can contain up to 60 characters
                     * @param Name Notification template name, which can contain up to 60 characters
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
                     * @return NoticeType Notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
                     */
                    std::string GetNoticeType() const;

                    /**
                     * 设置Notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
                     * @param NoticeType Notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
                     */
                    void SetNoticeType(const std::string& _noticeType);

                    /**
                     * 判断参数 NoticeType 是否已赋值
                     * @return NoticeType 是否已赋值
                     */
                    bool NoticeTypeHasBeenSet() const;

                    /**
                     * 获取Notification language. Valid values: zh-CN (Chinese), en-US (English)
                     * @return NoticeLanguage Notification language. Valid values: zh-CN (Chinese), en-US (English)
                     */
                    std::string GetNoticeLanguage() const;

                    /**
                     * 设置Notification language. Valid values: zh-CN (Chinese), en-US (English)
                     * @param NoticeLanguage Notification language. Valid values: zh-CN (Chinese), en-US (English)
                     */
                    void SetNoticeLanguage(const std::string& _noticeLanguage);

                    /**
                     * 判断参数 NoticeLanguage 是否已赋值
                     * @return NoticeLanguage 是否已赋值
                     */
                    bool NoticeLanguageHasBeenSet() const;

                    /**
                     * 获取User notifications (up to 5)
                     * @return UserNotices User notifications (up to 5)
                     */
                    std::vector<UserNotice> GetUserNotices() const;

                    /**
                     * 设置User notifications (up to 5)
                     * @param UserNotices User notifications (up to 5)
                     */
                    void SetUserNotices(const std::vector<UserNotice>& _userNotices);

                    /**
                     * 判断参数 UserNotices 是否已赋值
                     * @return UserNotices 是否已赋值
                     */
                    bool UserNoticesHasBeenSet() const;

                    /**
                     * 获取Callback notifications (up to 3)
                     * @return URLNotices Callback notifications (up to 3)
                     */
                    std::vector<URLNotice> GetURLNotices() const;

                    /**
                     * 设置Callback notifications (up to 3)
                     * @param URLNotices Callback notifications (up to 3)
                     */
                    void SetURLNotices(const std::vector<URLNotice>& _uRLNotices);

                    /**
                     * 判断参数 URLNotices 是否已赋值
                     * @return URLNotices 是否已赋值
                     */
                    bool URLNoticesHasBeenSet() const;

                    /**
                     * 获取The operation of pushing alarm notifications to CLS. Up to one CLS log topic can be configured.
                     * @return CLSNotices The operation of pushing alarm notifications to CLS. Up to one CLS log topic can be configured.
                     */
                    std::vector<CLSNotice> GetCLSNotices() const;

                    /**
                     * 设置The operation of pushing alarm notifications to CLS. Up to one CLS log topic can be configured.
                     * @param CLSNotices The operation of pushing alarm notifications to CLS. Up to one CLS log topic can be configured.
                     */
                    void SetCLSNotices(const std::vector<CLSNotice>& _cLSNotices);

                    /**
                     * 判断参数 CLSNotices 是否已赋值
                     * @return CLSNotices 是否已赋值
                     */
                    bool CLSNoticesHasBeenSet() const;

                    /**
                     * 获取Tags bound to a template
                     * @return Tags Tags bound to a template
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags bound to a template
                     * @param Tags Tags bound to a template
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Module name. Enter "monitor" here
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Notification template name, which can contain up to 60 characters
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
                     * Tags bound to a template
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMNOTICEREQUEST_H_
