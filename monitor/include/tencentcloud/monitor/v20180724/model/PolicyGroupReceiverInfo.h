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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUPRECEIVERINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUPRECEIVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Information on recipients in the policy template list (API v2018)
                */
                class PolicyGroupReceiverInfo : public AbstractModel
                {
                public:
                    PolicyGroupReceiverInfo();
                    ~PolicyGroupReceiverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取End time of a valid time period.
                     * @return EndTime End time of a valid time period.
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time of a valid time period.
                     * @param EndTime End time of a valid time period.
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is required to send notifications.
                     * @return NeedSendNotice Whether it is required to send notifications.
                     */
                    int64_t GetNeedSendNotice() const;

                    /**
                     * 设置Whether it is required to send notifications.
                     * @param NeedSendNotice Whether it is required to send notifications.
                     */
                    void SetNeedSendNotice(const int64_t& _needSendNotice);

                    /**
                     * 判断参数 NeedSendNotice 是否已赋值
                     * @return NeedSendNotice 是否已赋值
                     */
                    bool NeedSendNoticeHasBeenSet() const;

                    /**
                     * 获取Alarm receiving channel.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return NotifyWay Alarm receiving channel.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置Alarm receiving channel.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param NotifyWay Alarm receiving channel.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetNotifyWay(const std::vector<std::string>& _notifyWay);

                    /**
                     * 判断参数 NotifyWay 是否已赋值
                     * @return NotifyWay 是否已赋值
                     */
                    bool NotifyWayHasBeenSet() const;

                    /**
                     * 获取Alarm call intervals for individuals in seconds.
                     * @return PersonInterval Alarm call intervals for individuals in seconds.
                     */
                    int64_t GetPersonInterval() const;

                    /**
                     * 设置Alarm call intervals for individuals in seconds.
                     * @param PersonInterval Alarm call intervals for individuals in seconds.
                     */
                    void SetPersonInterval(const int64_t& _personInterval);

                    /**
                     * 判断参数 PersonInterval 是否已赋值
                     * @return PersonInterval 是否已赋值
                     */
                    bool PersonIntervalHasBeenSet() const;

                    /**
                     * 获取Message recipient group list.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ReceiverGroupList Message recipient group list.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetReceiverGroupList() const;

                    /**
                     * 设置Message recipient group list.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ReceiverGroupList Message recipient group list.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetReceiverGroupList(const std::vector<int64_t>& _receiverGroupList);

                    /**
                     * 判断参数 ReceiverGroupList 是否已赋值
                     * @return ReceiverGroupList 是否已赋值
                     */
                    bool ReceiverGroupListHasBeenSet() const;

                    /**
                     * 获取Recipient type.
                     * @return ReceiverType Recipient type.
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置Recipient type.
                     * @param ReceiverType Recipient type.
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取Recipient list. The list of recipient IDs that is queried by a platform API.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ReceiverUserList Recipient list. The list of recipient IDs that is queried by a platform API.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetReceiverUserList() const;

                    /**
                     * 设置Recipient list. The list of recipient IDs that is queried by a platform API.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ReceiverUserList Recipient list. The list of recipient IDs that is queried by a platform API.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetReceiverUserList(const std::vector<int64_t>& _receiverUserList);

                    /**
                     * 判断参数 ReceiverUserList 是否已赋值
                     * @return ReceiverUserList 是否已赋值
                     */
                    bool ReceiverUserListHasBeenSet() const;

                    /**
                     * 获取Alarm resolution notification method.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RecoverNotify Alarm resolution notification method.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetRecoverNotify() const;

                    /**
                     * 设置Alarm resolution notification method.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param RecoverNotify Alarm resolution notification method.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRecoverNotify(const std::vector<std::string>& _recoverNotify);

                    /**
                     * 判断参数 RecoverNotify 是否已赋值
                     * @return RecoverNotify 是否已赋值
                     */
                    bool RecoverNotifyHasBeenSet() const;

                    /**
                     * 获取Alarm call interval per round in seconds.
                     * @return RoundInterval Alarm call interval per round in seconds.
                     */
                    int64_t GetRoundInterval() const;

                    /**
                     * 设置Alarm call interval per round in seconds.
                     * @param RoundInterval Alarm call interval per round in seconds.
                     */
                    void SetRoundInterval(const int64_t& _roundInterval);

                    /**
                     * 判断参数 RoundInterval 是否已赋值
                     * @return RoundInterval 是否已赋值
                     */
                    bool RoundIntervalHasBeenSet() const;

                    /**
                     * 获取Number of alarm call rounds.
                     * @return RoundNumber Number of alarm call rounds.
                     */
                    int64_t GetRoundNumber() const;

                    /**
                     * 设置Number of alarm call rounds.
                     * @param RoundNumber Number of alarm call rounds.
                     */
                    void SetRoundNumber(const int64_t& _roundNumber);

                    /**
                     * 判断参数 RoundNumber 是否已赋值
                     * @return RoundNumber 是否已赋值
                     */
                    bool RoundNumberHasBeenSet() const;

                    /**
                     * 获取Alarm call notification time. Valid values: `OCCUR` (indicating that a notification is sent when the alarm is triggered) and `RECOVER` (indicating that a notification is sent when the alarm is resolved).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SendFor Alarm call notification time. Valid values: `OCCUR` (indicating that a notification is sent when the alarm is triggered) and `RECOVER` (indicating that a notification is sent when the alarm is resolved).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetSendFor() const;

                    /**
                     * 设置Alarm call notification time. Valid values: `OCCUR` (indicating that a notification is sent when the alarm is triggered) and `RECOVER` (indicating that a notification is sent when the alarm is resolved).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param SendFor Alarm call notification time. Valid values: `OCCUR` (indicating that a notification is sent when the alarm is triggered) and `RECOVER` (indicating that a notification is sent when the alarm is resolved).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSendFor(const std::vector<std::string>& _sendFor);

                    /**
                     * 判断参数 SendFor 是否已赋值
                     * @return SendFor 是否已赋值
                     */
                    bool SendForHasBeenSet() const;

                    /**
                     * 获取Start time of a valid time period.
                     * @return StartTime Start time of a valid time period.
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time of a valid time period.
                     * @param StartTime Start time of a valid time period.
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取UID of the alarm call recipient.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return UIDList UID of the alarm call recipient.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetUIDList() const;

                    /**
                     * 设置UID of the alarm call recipient.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param UIDList UID of the alarm call recipient.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUIDList(const std::vector<int64_t>& _uIDList);

                    /**
                     * 判断参数 UIDList 是否已赋值
                     * @return UIDList 是否已赋值
                     */
                    bool UIDListHasBeenSet() const;

                private:

                    /**
                     * End time of a valid time period.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Whether it is required to send notifications.
                     */
                    int64_t m_needSendNotice;
                    bool m_needSendNoticeHasBeenSet;

                    /**
                     * Alarm receiving channel.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * Alarm call intervals for individuals in seconds.
                     */
                    int64_t m_personInterval;
                    bool m_personIntervalHasBeenSet;

                    /**
                     * Message recipient group list.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_receiverGroupList;
                    bool m_receiverGroupListHasBeenSet;

                    /**
                     * Recipient type.
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * Recipient list. The list of recipient IDs that is queried by a platform API.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_receiverUserList;
                    bool m_receiverUserListHasBeenSet;

                    /**
                     * Alarm resolution notification method.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_recoverNotify;
                    bool m_recoverNotifyHasBeenSet;

                    /**
                     * Alarm call interval per round in seconds.
                     */
                    int64_t m_roundInterval;
                    bool m_roundIntervalHasBeenSet;

                    /**
                     * Number of alarm call rounds.
                     */
                    int64_t m_roundNumber;
                    bool m_roundNumberHasBeenSet;

                    /**
                     * Alarm call notification time. Valid values: `OCCUR` (indicating that a notification is sent when the alarm is triggered) and `RECOVER` (indicating that a notification is sent when the alarm is resolved).
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_sendFor;
                    bool m_sendForHasBeenSet;

                    /**
                     * Start time of a valid time period.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * UID of the alarm call recipient.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_uIDList;
                    bool m_uIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUPRECEIVERINFO_H_
