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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFORECEIVERINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFORECEIVERINFO_H_

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
                * Alarm recipient information output by the policy query
                */
                class DescribePolicyGroupInfoReceiverInfo : public AbstractModel
                {
                public:
                    DescribePolicyGroupInfoReceiverInfo();
                    ~DescribePolicyGroupInfoReceiverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of alarm recipient group IDs.
                     * @return ReceiverGroupList List of alarm recipient group IDs.
                     */
                    std::vector<int64_t> GetReceiverGroupList() const;

                    /**
                     * 设置List of alarm recipient group IDs.
                     * @param ReceiverGroupList List of alarm recipient group IDs.
                     */
                    void SetReceiverGroupList(const std::vector<int64_t>& _receiverGroupList);

                    /**
                     * 判断参数 ReceiverGroupList 是否已赋值
                     * @return ReceiverGroupList 是否已赋值
                     */
                    bool ReceiverGroupListHasBeenSet() const;

                    /**
                     * 获取List of alarm recipient IDs.
                     * @return ReceiverUserList List of alarm recipient IDs.
                     */
                    std::vector<int64_t> GetReceiverUserList() const;

                    /**
                     * 设置List of alarm recipient IDs.
                     * @param ReceiverUserList List of alarm recipient IDs.
                     */
                    void SetReceiverUserList(const std::vector<int64_t>& _receiverUserList);

                    /**
                     * 判断参数 ReceiverUserList 是否已赋值
                     * @return ReceiverUserList 是否已赋值
                     */
                    bool ReceiverUserListHasBeenSet() const;

                    /**
                     * 获取Start time of the alarm period. Value range: [0,86400). Convert the Unix timestamp to Beijing time and then remove the date. For example, 7200 indicates '10:0:0'.
                     * @return StartTime Start time of the alarm period. Value range: [0,86400). Convert the Unix timestamp to Beijing time and then remove the date. For example, 7200 indicates '10:0:0'.
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time of the alarm period. Value range: [0,86400). Convert the Unix timestamp to Beijing time and then remove the date. For example, 7200 indicates '10:0:0'.
                     * @param StartTime Start time of the alarm period. Value range: [0,86400). Convert the Unix timestamp to Beijing time and then remove the date. For example, 7200 indicates '10:0:0'.
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the alarm period. The meaning is the same as that of StartTime.
                     * @return EndTime End time of the alarm period. The meaning is the same as that of StartTime.
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time of the alarm period. The meaning is the same as that of StartTime.
                     * @param EndTime End time of the alarm period. The meaning is the same as that of StartTime.
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Recipient type. Valid values: group and user.
                     * @return ReceiverType Recipient type. Valid values: group and user.
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置Recipient type. Valid values: group and user.
                     * @param ReceiverType Recipient type. Valid values: group and user.
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取Alarm notification method. Valid values: "SMS", "SITE", "EMAIL", "CALL", and "WECHAT".
                     * @return NotifyWay Alarm notification method. Valid values: "SMS", "SITE", "EMAIL", "CALL", and "WECHAT".
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置Alarm notification method. Valid values: "SMS", "SITE", "EMAIL", "CALL", and "WECHAT".
                     * @param NotifyWay Alarm notification method. Valid values: "SMS", "SITE", "EMAIL", "CALL", and "WECHAT".
                     */
                    void SetNotifyWay(const std::vector<std::string>& _notifyWay);

                    /**
                     * 判断参数 NotifyWay 是否已赋值
                     * @return NotifyWay 是否已赋值
                     */
                    bool NotifyWayHasBeenSet() const;

                    /**
                     * 获取Uid of the alarm call recipient.
Note: This field may return null, indicating that no valid value was found.
                     * @return UidList Uid of the alarm call recipient.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<int64_t> GetUidList() const;

                    /**
                     * 设置Uid of the alarm call recipient.
Note: This field may return null, indicating that no valid value was found.
                     * @param UidList Uid of the alarm call recipient.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetUidList(const std::vector<int64_t>& _uidList);

                    /**
                     * 判断参数 UidList 是否已赋值
                     * @return UidList 是否已赋值
                     */
                    bool UidListHasBeenSet() const;

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
                     * 获取Intervals of alarm call rounds in seconds.
                     * @return RoundInterval Intervals of alarm call rounds in seconds.
                     */
                    int64_t GetRoundInterval() const;

                    /**
                     * 设置Intervals of alarm call rounds in seconds.
                     * @param RoundInterval Intervals of alarm call rounds in seconds.
                     */
                    void SetRoundInterval(const int64_t& _roundInterval);

                    /**
                     * 判断参数 RoundInterval 是否已赋值
                     * @return RoundInterval 是否已赋值
                     */
                    bool RoundIntervalHasBeenSet() const;

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
                     * 获取Whether to send an alarm call delivery notice. The value 0 indicates that no notice needs to be sent. The value 1 indicates that a notice needs to be sent.
                     * @return NeedSendNotice Whether to send an alarm call delivery notice. The value 0 indicates that no notice needs to be sent. The value 1 indicates that a notice needs to be sent.
                     */
                    int64_t GetNeedSendNotice() const;

                    /**
                     * 设置Whether to send an alarm call delivery notice. The value 0 indicates that no notice needs to be sent. The value 1 indicates that a notice needs to be sent.
                     * @param NeedSendNotice Whether to send an alarm call delivery notice. The value 0 indicates that no notice needs to be sent. The value 1 indicates that a notice needs to be sent.
                     */
                    void SetNeedSendNotice(const int64_t& _needSendNotice);

                    /**
                     * 判断参数 NeedSendNotice 是否已赋值
                     * @return NeedSendNotice 是否已赋值
                     */
                    bool NeedSendNoticeHasBeenSet() const;

                    /**
                     * 获取Alarm call notification time. Valid values: OCCUR (indicating that a notice is sent when the alarm is triggered) and RECOVER (indicating that a notice is sent when the alarm is recovered).
                     * @return SendFor Alarm call notification time. Valid values: OCCUR (indicating that a notice is sent when the alarm is triggered) and RECOVER (indicating that a notice is sent when the alarm is recovered).
                     */
                    std::vector<std::string> GetSendFor() const;

                    /**
                     * 设置Alarm call notification time. Valid values: OCCUR (indicating that a notice is sent when the alarm is triggered) and RECOVER (indicating that a notice is sent when the alarm is recovered).
                     * @param SendFor Alarm call notification time. Valid values: OCCUR (indicating that a notice is sent when the alarm is triggered) and RECOVER (indicating that a notice is sent when the alarm is recovered).
                     */
                    void SetSendFor(const std::vector<std::string>& _sendFor);

                    /**
                     * 判断参数 SendFor 是否已赋值
                     * @return SendFor 是否已赋值
                     */
                    bool SendForHasBeenSet() const;

                    /**
                     * 获取Notification method when an alarm is recovered. Valid value: SMS.
                     * @return RecoverNotify Notification method when an alarm is recovered. Valid value: SMS.
                     */
                    std::vector<std::string> GetRecoverNotify() const;

                    /**
                     * 设置Notification method when an alarm is recovered. Valid value: SMS.
                     * @param RecoverNotify Notification method when an alarm is recovered. Valid value: SMS.
                     */
                    void SetRecoverNotify(const std::vector<std::string>& _recoverNotify);

                    /**
                     * 判断参数 RecoverNotify 是否已赋值
                     * @return RecoverNotify 是否已赋值
                     */
                    bool RecoverNotifyHasBeenSet() const;

                    /**
                     * 获取Alarm language.
Note: This field may return null, indicating that no valid value was found.
                     * @return ReceiveLanguage Alarm language.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetReceiveLanguage() const;

                    /**
                     * 设置Alarm language.
Note: This field may return null, indicating that no valid value was found.
                     * @param ReceiveLanguage Alarm language.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetReceiveLanguage(const std::string& _receiveLanguage);

                    /**
                     * 判断参数 ReceiveLanguage 是否已赋值
                     * @return ReceiveLanguage 是否已赋值
                     */
                    bool ReceiveLanguageHasBeenSet() const;

                private:

                    /**
                     * List of alarm recipient group IDs.
                     */
                    std::vector<int64_t> m_receiverGroupList;
                    bool m_receiverGroupListHasBeenSet;

                    /**
                     * List of alarm recipient IDs.
                     */
                    std::vector<int64_t> m_receiverUserList;
                    bool m_receiverUserListHasBeenSet;

                    /**
                     * Start time of the alarm period. Value range: [0,86400). Convert the Unix timestamp to Beijing time and then remove the date. For example, 7200 indicates '10:0:0'.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the alarm period. The meaning is the same as that of StartTime.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Recipient type. Valid values: group and user.
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * Alarm notification method. Valid values: "SMS", "SITE", "EMAIL", "CALL", and "WECHAT".
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * Uid of the alarm call recipient.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<int64_t> m_uidList;
                    bool m_uidListHasBeenSet;

                    /**
                     * Number of alarm call rounds.
                     */
                    int64_t m_roundNumber;
                    bool m_roundNumberHasBeenSet;

                    /**
                     * Intervals of alarm call rounds in seconds.
                     */
                    int64_t m_roundInterval;
                    bool m_roundIntervalHasBeenSet;

                    /**
                     * Alarm call intervals for individuals in seconds.
                     */
                    int64_t m_personInterval;
                    bool m_personIntervalHasBeenSet;

                    /**
                     * Whether to send an alarm call delivery notice. The value 0 indicates that no notice needs to be sent. The value 1 indicates that a notice needs to be sent.
                     */
                    int64_t m_needSendNotice;
                    bool m_needSendNoticeHasBeenSet;

                    /**
                     * Alarm call notification time. Valid values: OCCUR (indicating that a notice is sent when the alarm is triggered) and RECOVER (indicating that a notice is sent when the alarm is recovered).
                     */
                    std::vector<std::string> m_sendFor;
                    bool m_sendForHasBeenSet;

                    /**
                     * Notification method when an alarm is recovered. Valid value: SMS.
                     */
                    std::vector<std::string> m_recoverNotify;
                    bool m_recoverNotifyHasBeenSet;

                    /**
                     * Alarm language.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_receiveLanguage;
                    bool m_receiveLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFORECEIVERINFO_H_
