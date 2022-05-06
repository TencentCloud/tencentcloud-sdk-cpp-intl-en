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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_USERNOTICE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_USERNOTICE_H_

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
                * Cloud Monitor alarm notification template - user notification details
                */
                class UserNotice : public AbstractModel
                {
                public:
                    UserNotice();
                    ~UserNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recipient type. Valid values: USER (user), GROUP (user group)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReceiverType Recipient type. Valid values: USER (user), GROUP (user group)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置Recipient type. Valid values: USER (user), GROUP (user group)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ReceiverType Recipient type. Valid values: USER (user), GROUP (user group)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取Notification start time, which is expressed by the number of seconds since 00:00:00. Value range: 0–86399
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Notification start time, which is expressed by the number of seconds since 00:00:00. Value range: 0–86399
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Notification start time, which is expressed by the number of seconds since 00:00:00. Value range: 0–86399
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param StartTime Notification start time, which is expressed by the number of seconds since 00:00:00. Value range: 0–86399
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Notification end time, which is expressed by the number of seconds since 00:00:00. Value range: 0–86399
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Notification end time, which is expressed by the number of seconds since 00:00:00. Value range: 0–86399
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Notification end time, which is expressed by the number of seconds since 00:00:00. Value range: 0–86399
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EndTime Notification end time, which is expressed by the number of seconds since 00:00:00. Value range: 0–86399
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Notification channel list. Valid values: `EMAIL` (email), `SMS` (SMS), `CALL` (phone), `WECHAT` (WeChat), `RTX` (WeCom)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return NoticeWay Notification channel list. Valid values: `EMAIL` (email), `SMS` (SMS), `CALL` (phone), `WECHAT` (WeChat), `RTX` (WeCom)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetNoticeWay() const;

                    /**
                     * 设置Notification channel list. Valid values: `EMAIL` (email), `SMS` (SMS), `CALL` (phone), `WECHAT` (WeChat), `RTX` (WeCom)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param NoticeWay Notification channel list. Valid values: `EMAIL` (email), `SMS` (SMS), `CALL` (phone), `WECHAT` (WeChat), `RTX` (WeCom)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetNoticeWay(const std::vector<std::string>& _noticeWay);

                    /**
                     * 判断参数 NoticeWay 是否已赋值
                     * @return NoticeWay 是否已赋值
                     */
                    bool NoticeWayHasBeenSet() const;

                    /**
                     * 获取User `uid` list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserIds User `uid` list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetUserIds() const;

                    /**
                     * 设置User `uid` list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UserIds User `uid` list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserIds(const std::vector<int64_t>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取User group ID list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GroupIds User group ID list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetGroupIds() const;

                    /**
                     * 设置User group ID list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param GroupIds User group ID list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGroupIds(const std::vector<int64_t>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取Phone polling list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PhoneOrder Phone polling list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetPhoneOrder() const;

                    /**
                     * 设置Phone polling list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PhoneOrder Phone polling list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPhoneOrder(const std::vector<int64_t>& _phoneOrder);

                    /**
                     * 判断参数 PhoneOrder 是否已赋值
                     * @return PhoneOrder 是否已赋值
                     */
                    bool PhoneOrderHasBeenSet() const;

                    /**
                     * 获取Number of phone pollings. Value range: 1–5
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PhoneCircleTimes Number of phone pollings. Value range: 1–5
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPhoneCircleTimes() const;

                    /**
                     * 设置Number of phone pollings. Value range: 1–5
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PhoneCircleTimes Number of phone pollings. Value range: 1–5
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPhoneCircleTimes(const int64_t& _phoneCircleTimes);

                    /**
                     * 判断参数 PhoneCircleTimes 是否已赋值
                     * @return PhoneCircleTimes 是否已赋值
                     */
                    bool PhoneCircleTimesHasBeenSet() const;

                    /**
                     * 获取Call interval in seconds within one polling. Value range: 60–900
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PhoneInnerInterval Call interval in seconds within one polling. Value range: 60–900
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPhoneInnerInterval() const;

                    /**
                     * 设置Call interval in seconds within one polling. Value range: 60–900
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PhoneInnerInterval Call interval in seconds within one polling. Value range: 60–900
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPhoneInnerInterval(const int64_t& _phoneInnerInterval);

                    /**
                     * 判断参数 PhoneInnerInterval 是否已赋值
                     * @return PhoneInnerInterval 是否已赋值
                     */
                    bool PhoneInnerIntervalHasBeenSet() const;

                    /**
                     * 获取Polling interval in seconds. Value range: 60–900
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PhoneCircleInterval Polling interval in seconds. Value range: 60–900
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPhoneCircleInterval() const;

                    /**
                     * 设置Polling interval in seconds. Value range: 60–900
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PhoneCircleInterval Polling interval in seconds. Value range: 60–900
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPhoneCircleInterval(const int64_t& _phoneCircleInterval);

                    /**
                     * 判断参数 PhoneCircleInterval 是否已赋值
                     * @return PhoneCircleInterval 是否已赋值
                     */
                    bool PhoneCircleIntervalHasBeenSet() const;

                    /**
                     * 获取Whether receipt notification is required. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NeedPhoneArriveNotice Whether receipt notification is required. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetNeedPhoneArriveNotice() const;

                    /**
                     * 设置Whether receipt notification is required. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NeedPhoneArriveNotice Whether receipt notification is required. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNeedPhoneArriveNotice(const int64_t& _needPhoneArriveNotice);

                    /**
                     * 判断参数 NeedPhoneArriveNotice 是否已赋值
                     * @return NeedPhoneArriveNotice 是否已赋值
                     */
                    bool NeedPhoneArriveNoticeHasBeenSet() const;

                    /**
                     * 获取Dial type. `SYNC` (simultaneous dial), `CIRCLE` (polled dial). Default value: `CIRCLE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PhoneCallType Dial type. `SYNC` (simultaneous dial), `CIRCLE` (polled dial). Default value: `CIRCLE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPhoneCallType() const;

                    /**
                     * 设置Dial type. `SYNC` (simultaneous dial), `CIRCLE` (polled dial). Default value: `CIRCLE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param PhoneCallType Dial type. `SYNC` (simultaneous dial), `CIRCLE` (polled dial). Default value: `CIRCLE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPhoneCallType(const std::string& _phoneCallType);

                    /**
                     * 判断参数 PhoneCallType 是否已赋值
                     * @return PhoneCallType 是否已赋值
                     */
                    bool PhoneCallTypeHasBeenSet() const;

                    /**
                     * 获取Notification cycle. The values 1-7 indicate Monday to Sunday.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Weekday Notification cycle. The values 1-7 indicate Monday to Sunday.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetWeekday() const;

                    /**
                     * 设置Notification cycle. The values 1-7 indicate Monday to Sunday.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Weekday Notification cycle. The values 1-7 indicate Monday to Sunday.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetWeekday(const std::vector<int64_t>& _weekday);

                    /**
                     * 判断参数 Weekday 是否已赋值
                     * @return Weekday 是否已赋值
                     */
                    bool WeekdayHasBeenSet() const;

                private:

                    /**
                     * Recipient type. Valid values: USER (user), GROUP (user group)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * Notification start time, which is expressed by the number of seconds since 00:00:00. Value range: 0–86399
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Notification end time, which is expressed by the number of seconds since 00:00:00. Value range: 0–86399
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Notification channel list. Valid values: `EMAIL` (email), `SMS` (SMS), `CALL` (phone), `WECHAT` (WeChat), `RTX` (WeCom)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_noticeWay;
                    bool m_noticeWayHasBeenSet;

                    /**
                     * User `uid` list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * User group ID list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * Phone polling list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_phoneOrder;
                    bool m_phoneOrderHasBeenSet;

                    /**
                     * Number of phone pollings. Value range: 1–5
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_phoneCircleTimes;
                    bool m_phoneCircleTimesHasBeenSet;

                    /**
                     * Call interval in seconds within one polling. Value range: 60–900
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_phoneInnerInterval;
                    bool m_phoneInnerIntervalHasBeenSet;

                    /**
                     * Polling interval in seconds. Value range: 60–900
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_phoneCircleInterval;
                    bool m_phoneCircleIntervalHasBeenSet;

                    /**
                     * Whether receipt notification is required. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_needPhoneArriveNotice;
                    bool m_needPhoneArriveNoticeHasBeenSet;

                    /**
                     * Dial type. `SYNC` (simultaneous dial), `CIRCLE` (polled dial). Default value: `CIRCLE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_phoneCallType;
                    bool m_phoneCallTypeHasBeenSet;

                    /**
                     * Notification cycle. The values 1-7 indicate Monday to Sunday.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_weekday;
                    bool m_weekdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_USERNOTICE_H_
