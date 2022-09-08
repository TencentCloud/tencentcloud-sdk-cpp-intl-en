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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMNOTICE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Alarm notification template details
                */
                class AlarmNotice : public AbstractModel
                {
                public:
                    AlarmNotice();
                    ~AlarmNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm notification template ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Id Alarm notification template ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetId() const;

                    /**
                     * 设置Alarm notification template ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Id Alarm notification template ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Alarm notification template name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Name Alarm notification template name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm notification template name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Name Alarm notification template name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Last modified time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt Last modified time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Last modified time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UpdatedAt Last modified time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Last modified by
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedBy Last modified by
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdatedBy() const;

                    /**
                     * 设置Last modified by
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UpdatedBy Last modified by
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdatedBy(const std::string& _updatedBy);

                    /**
                     * 判断参数 UpdatedBy 是否已赋值
                     * @return UpdatedBy 是否已赋值
                     */
                    bool UpdatedByHasBeenSet() const;

                    /**
                     * 获取Alarm notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NoticeType Alarm notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNoticeType() const;

                    /**
                     * 设置Alarm notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NoticeType Alarm notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNoticeType(const std::string& _noticeType);

                    /**
                     * 判断参数 NoticeType 是否已赋值
                     * @return NoticeType 是否已赋值
                     */
                    bool NoticeTypeHasBeenSet() const;

                    /**
                     * 获取User notification list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserNotices User notification list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserNotice> GetUserNotices() const;

                    /**
                     * 设置User notification list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UserNotices User notification list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserNotices(const std::vector<UserNotice>& _userNotices);

                    /**
                     * 判断参数 UserNotices 是否已赋值
                     * @return UserNotices 是否已赋值
                     */
                    bool UserNoticesHasBeenSet() const;

                    /**
                     * 获取Callback notification list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return URLNotices Callback notification list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<URLNotice> GetURLNotices() const;

                    /**
                     * 设置Callback notification list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param URLNotices Callback notification list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetURLNotices(const std::vector<URLNotice>& _uRLNotices);

                    /**
                     * 判断参数 URLNotices 是否已赋值
                     * @return URLNotices 是否已赋值
                     */
                    bool URLNoticesHasBeenSet() const;

                    /**
                     * 获取Whether it is the system default notification template. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsPreset Whether it is the system default notification template. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsPreset() const;

                    /**
                     * 设置Whether it is the system default notification template. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsPreset Whether it is the system default notification template. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsPreset(const int64_t& _isPreset);

                    /**
                     * 判断参数 IsPreset 是否已赋值
                     * @return IsPreset 是否已赋值
                     */
                    bool IsPresetHasBeenSet() const;

                    /**
                     * 获取Notification language. Valid values: zh-CN (Chinese), en-US (English)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NoticeLanguage Notification language. Valid values: zh-CN (Chinese), en-US (English)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNoticeLanguage() const;

                    /**
                     * 设置Notification language. Valid values: zh-CN (Chinese), en-US (English)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NoticeLanguage Notification language. Valid values: zh-CN (Chinese), en-US (English)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNoticeLanguage(const std::string& _noticeLanguage);

                    /**
                     * 判断参数 NoticeLanguage 是否已赋值
                     * @return NoticeLanguage 是否已赋值
                     */
                    bool NoticeLanguageHasBeenSet() const;

                    /**
                     * 获取List of IDs of the alarm policies bound to alarm notification template
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PolicyIds List of IDs of the alarm policies bound to alarm notification template
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置List of IDs of the alarm policies bound to alarm notification template
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PolicyIds List of IDs of the alarm policies bound to alarm notification template
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取Backend AMP consumer ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AMPConsumerId Backend AMP consumer ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAMPConsumerId() const;

                    /**
                     * 设置Backend AMP consumer ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AMPConsumerId Backend AMP consumer ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAMPConsumerId(const std::string& _aMPConsumerId);

                    /**
                     * 判断参数 AMPConsumerId 是否已赋值
                     * @return AMPConsumerId 是否已赋值
                     */
                    bool AMPConsumerIdHasBeenSet() const;

                    /**
                     * 获取Channel to push alarm notifications to CLS.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CLSNotices Channel to push alarm notifications to CLS.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<CLSNotice> GetCLSNotices() const;

                    /**
                     * 设置Channel to push alarm notifications to CLS.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CLSNotices Channel to push alarm notifications to CLS.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCLSNotices(const std::vector<CLSNotice>& _cLSNotices);

                    /**
                     * 判断参数 CLSNotices 是否已赋值
                     * @return CLSNotices 是否已赋值
                     */
                    bool CLSNoticesHasBeenSet() const;

                private:

                    /**
                     * Alarm notification template ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Alarm notification template name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Last modified time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Last modified by
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedBy;
                    bool m_updatedByHasBeenSet;

                    /**
                     * Alarm notification type. Valid values: ALARM (for unresolved alarms), OK (for resolved alarms), ALL (for all alarms)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_noticeType;
                    bool m_noticeTypeHasBeenSet;

                    /**
                     * User notification list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserNotice> m_userNotices;
                    bool m_userNoticesHasBeenSet;

                    /**
                     * Callback notification list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<URLNotice> m_uRLNotices;
                    bool m_uRLNoticesHasBeenSet;

                    /**
                     * Whether it is the system default notification template. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isPreset;
                    bool m_isPresetHasBeenSet;

                    /**
                     * Notification language. Valid values: zh-CN (Chinese), en-US (English)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_noticeLanguage;
                    bool m_noticeLanguageHasBeenSet;

                    /**
                     * List of IDs of the alarm policies bound to alarm notification template
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * Backend AMP consumer ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aMPConsumerId;
                    bool m_aMPConsumerIdHasBeenSet;

                    /**
                     * Channel to push alarm notifications to CLS.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<CLSNotice> m_cLSNotices;
                    bool m_cLSNoticesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMNOTICE_H_
