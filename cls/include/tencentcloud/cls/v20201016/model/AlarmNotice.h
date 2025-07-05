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
                * Alarm notification template type
                */
                class AlarmNotice : public AbstractModel
                {
                public:
                    AlarmNotice();
                    ~AlarmNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm notification template name
                     * @return Name Alarm notification template name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm notification template name
                     * @param _name Alarm notification template name
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
                     * 获取Information of the recipient in alarm notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return NoticeReceivers Information of the recipient in alarm notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置Information of the recipient in alarm notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _noticeReceivers Information of the recipient in alarm notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Callback information of alarm notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return WebCallbacks Callback information of alarm notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置Callback information of alarm notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _webCallbacks Callback information of alarm notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Alarm notification template ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AlarmNoticeId Alarm notification template ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置Alarm notification template ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _alarmNoticeId Alarm notification template ID
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Last update time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UpdateTime Last update time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _updateTime Last update time
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Notification rules.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NoticeRules Notification rules.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NoticeRule> GetNoticeRules() const;

                    /**
                     * 设置Notification rules.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _noticeRules Notification rules.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Alarm notification template name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Alarm template type. Optional values:<br><li> Trigger - Alarm Trigger </li><br><li> Recovery - Alarm Recovery </li><br><li> All - Alarm Trigger and Alarm Recovery </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Information of the recipient in alarm notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * Callback information of alarm notification template
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * Alarm notification template ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Notification rules.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NoticeRule> m_noticeRules;
                    bool m_noticeRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICE_H_
