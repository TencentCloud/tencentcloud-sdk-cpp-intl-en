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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ALARMGROUP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ALARMGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Alarm group
                */
                class AlarmGroup : public AbstractModel
                {
                public:
                    AlarmGroup();
                    ~AlarmGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Notification channel ID, which can be obtained through the notification channel APIs of the basic platform</p>
                     * @return ChannelId <p>Notification channel ID, which can be obtained through the notification channel APIs of the basic platform</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>Notification channel ID, which can be obtained through the notification channel APIs of the basic platform</p>
                     * @param _channelId <p>Notification channel ID, which can be obtained through the notification channel APIs of the basic platform</p>
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>Notification channel name, which can be a user group name or email address</p>
                     * @return ChannelName <p>Notification channel name, which can be a user group name or email address</p>
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>Notification channel name, which can be a user group name or email address</p>
                     * @param _channelName <p>Notification channel name, which can be a user group name or email address</p>
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable the email channel. Default value: false</p>
                     * @return IsEmailChannel <p>Whether to enable the email channel. Default value: false</p>
                     * 
                     */
                    bool GetIsEmailChannel() const;

                    /**
                     * 设置<p>Whether to enable the email channel. Default value: false</p>
                     * @param _isEmailChannel <p>Whether to enable the email channel. Default value: false</p>
                     * 
                     */
                    void SetIsEmailChannel(const bool& _isEmailChannel);

                    /**
                     * 判断参数 IsEmailChannel 是否已赋值
                     * @return IsEmailChannel 是否已赋值
                     * 
                     */
                    bool IsEmailChannelHasBeenSet() const;

                    /**
                     * 获取<p>Alarm condition list. Value: <br>START: Start up<br>SUCCESS: Success<br>FAILURE: Failure<br>MONITOR_INDICATOR_ALARM: Monitoring metric alarm</p>
                     * @return AlarmConditions <p>Alarm condition list. Value: <br>START: Start up<br>SUCCESS: Success<br>FAILURE: Failure<br>MONITOR_INDICATOR_ALARM: Monitoring metric alarm</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmConditions() const;

                    /**
                     * 设置<p>Alarm condition list. Value: <br>START: Start up<br>SUCCESS: Success<br>FAILURE: Failure<br>MONITOR_INDICATOR_ALARM: Monitoring metric alarm</p>
                     * @param _alarmConditions <p>Alarm condition list. Value: <br>START: Start up<br>SUCCESS: Success<br>FAILURE: Failure<br>MONITOR_INDICATOR_ALARM: Monitoring metric alarm</p>
                     * 
                     */
                    void SetAlarmConditions(const std::vector<std::string>& _alarmConditions);

                    /**
                     * 判断参数 AlarmConditions 是否已赋值
                     * @return AlarmConditions 是否已赋值
                     * 
                     */
                    bool AlarmConditionsHasBeenSet() const;

                    /**
                     * 获取<p>Notification channel type. Value: 0 unspecified, 1 Email, 2 Webhook, 3 Teams, 4 Slack</p>
                     * @return ChannelType <p>Notification channel type. Value: 0 unspecified, 1 Email, 2 Webhook, 3 Teams, 4 Slack</p>
                     * 
                     */
                    int64_t GetChannelType() const;

                    /**
                     * 设置<p>Notification channel type. Value: 0 unspecified, 1 Email, 2 Webhook, 3 Teams, 4 Slack</p>
                     * @param _channelType <p>Notification channel type. Value: 0 unspecified, 1 Email, 2 Webhook, 3 Teams, 4 Slack</p>
                     * 
                     */
                    void SetChannelType(const int64_t& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Notification channel ID, which can be obtained through the notification channel APIs of the basic platform</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>Notification channel name, which can be a user group name or email address</p>
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>Whether to enable the email channel. Default value: false</p>
                     */
                    bool m_isEmailChannel;
                    bool m_isEmailChannelHasBeenSet;

                    /**
                     * <p>Alarm condition list. Value: <br>START: Start up<br>SUCCESS: Success<br>FAILURE: Failure<br>MONITOR_INDICATOR_ALARM: Monitoring metric alarm</p>
                     */
                    std::vector<std::string> m_alarmConditions;
                    bool m_alarmConditionsHasBeenSet;

                    /**
                     * <p>Notification channel type. Value: 0 unspecified, 1 Email, 2 Webhook, 3 Teams, 4 Slack</p>
                     */
                    int64_t m_channelType;
                    bool m_channelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ALARMGROUP_H_
