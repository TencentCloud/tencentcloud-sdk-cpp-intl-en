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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSNOTIFICATION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSNOTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * amp alarm channel configuration
                */
                class PrometheusNotification : public AbstractModel
                {
                public:
                    PrometheusNotification();
                    ~PrometheusNotification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether it is enabled
                     * @return Enabled Whether it is enabled
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether it is enabled
                     * @param Enabled Whether it is enabled
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Convergence time
                     * @return RepeatInterval Convergence time
                     */
                    std::string GetRepeatInterval() const;

                    /**
                     * 设置Convergence time
                     * @param RepeatInterval Convergence time
                     */
                    void SetRepeatInterval(const std::string& _repeatInterval);

                    /**
                     * 判断参数 RepeatInterval 是否已赋值
                     * @return RepeatInterval 是否已赋值
                     */
                    bool RepeatIntervalHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return TimeRangeStart Start time
                     */
                    std::string GetTimeRangeStart() const;

                    /**
                     * 设置Start time
                     * @param TimeRangeStart Start time
                     */
                    void SetTimeRangeStart(const std::string& _timeRangeStart);

                    /**
                     * 判断参数 TimeRangeStart 是否已赋值
                     * @return TimeRangeStart 是否已赋值
                     */
                    bool TimeRangeStartHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return TimeRangeEnd End time
                     */
                    std::string GetTimeRangeEnd() const;

                    /**
                     * 设置End time
                     * @param TimeRangeEnd End time
                     */
                    void SetTimeRangeEnd(const std::string& _timeRangeEnd);

                    /**
                     * 判断参数 TimeRangeEnd 是否已赋值
                     * @return TimeRangeEnd 是否已赋值
                     */
                    bool TimeRangeEndHasBeenSet() const;

                    /**
                     * 获取Alarm delivery method. Valid values: `SMS`, `EMAIL`, `CALL`, and `WECHAT`
It respectively represents SMS, email, phone calls, and WeChat.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return NotifyWay Alarm delivery method. Valid values: `SMS`, `EMAIL`, `CALL`, and `WECHAT`
It respectively represents SMS, email, phone calls, and WeChat.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置Alarm delivery method. Valid values: `SMS`, `EMAIL`, `CALL`, and `WECHAT`
It respectively represents SMS, email, phone calls, and WeChat.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param NotifyWay Alarm delivery method. Valid values: `SMS`, `EMAIL`, `CALL`, and `WECHAT`
It respectively represents SMS, email, phone calls, and WeChat.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetNotifyWay(const std::vector<std::string>& _notifyWay);

                    /**
                     * 判断参数 NotifyWay 是否已赋值
                     * @return NotifyWay 是否已赋值
                     */
                    bool NotifyWayHasBeenSet() const;

                    /**
                     * 获取The alarm recipient group (user group)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return ReceiverGroups The alarm recipient group (user group)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<uint64_t> GetReceiverGroups() const;

                    /**
                     * 设置The alarm recipient group (user group)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param ReceiverGroups The alarm recipient group (user group)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetReceiverGroups(const std::vector<uint64_t>& _receiverGroups);

                    /**
                     * 判断参数 ReceiverGroups 是否已赋值
                     * @return ReceiverGroups 是否已赋值
                     */
                    bool ReceiverGroupsHasBeenSet() const;

                    /**
                     * 获取The alarm sequence of phone calls
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return PhoneNotifyOrder The alarm sequence of phone calls
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<uint64_t> GetPhoneNotifyOrder() const;

                    /**
                     * 设置The alarm sequence of phone calls
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param PhoneNotifyOrder The alarm sequence of phone calls
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPhoneNotifyOrder(const std::vector<uint64_t>& _phoneNotifyOrder);

                    /**
                     * 判断参数 PhoneNotifyOrder 是否已赋值
                     * @return PhoneNotifyOrder 是否已赋值
                     */
                    bool PhoneNotifyOrderHasBeenSet() const;

                    /**
                     * 获取The number of phone call alarms
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return PhoneCircleTimes The number of phone call alarms
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetPhoneCircleTimes() const;

                    /**
                     * 设置The number of phone call alarms
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param PhoneCircleTimes The number of phone call alarms
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPhoneCircleTimes(const int64_t& _phoneCircleTimes);

                    /**
                     * 判断参数 PhoneCircleTimes 是否已赋值
                     * @return PhoneCircleTimes 是否已赋值
                     */
                    bool PhoneCircleTimesHasBeenSet() const;

                    /**
                     * 获取Dialing interval in seconds within one polling
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return PhoneInnerInterval Dialing interval in seconds within one polling
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetPhoneInnerInterval() const;

                    /**
                     * 设置Dialing interval in seconds within one polling
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param PhoneInnerInterval Dialing interval in seconds within one polling
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPhoneInnerInterval(const int64_t& _phoneInnerInterval);

                    /**
                     * 判断参数 PhoneInnerInterval 是否已赋值
                     * @return PhoneInnerInterval 是否已赋值
                     */
                    bool PhoneInnerIntervalHasBeenSet() const;

                    /**
                     * 获取Polling interval in seconds
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return PhoneCircleInterval Polling interval in seconds
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetPhoneCircleInterval() const;

                    /**
                     * 设置Polling interval in seconds
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param PhoneCircleInterval Polling interval in seconds
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPhoneCircleInterval(const int64_t& _phoneCircleInterval);

                    /**
                     * 判断参数 PhoneCircleInterval 是否已赋值
                     * @return PhoneCircleInterval 是否已赋值
                     */
                    bool PhoneCircleIntervalHasBeenSet() const;

                    /**
                     * 获取Phone call alarm arrival notification
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return PhoneArriveNotice Phone call alarm arrival notification
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool GetPhoneArriveNotice() const;

                    /**
                     * 设置Phone call alarm arrival notification
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param PhoneArriveNotice Phone call alarm arrival notification
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPhoneArriveNotice(const bool& _phoneArriveNotice);

                    /**
                     * 判断参数 PhoneArriveNotice 是否已赋值
                     * @return PhoneArriveNotice 是否已赋值
                     */
                    bool PhoneArriveNoticeHasBeenSet() const;

                    /**
                     * 获取Channel type. Default value: `amp`. The following channels are supported:
amp
webhook
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Type Channel type. Default value: `amp`. The following channels are supported:
amp
webhook
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Channel type. Default value: `amp`. The following channels are supported:
amp
webhook
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param Type Channel type. Default value: `amp`. The following channels are supported:
amp
webhook
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取This parameter is required if `Type` is `webhook`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return WebHook This parameter is required if `Type` is `webhook`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetWebHook() const;

                    /**
                     * 设置This parameter is required if `Type` is `webhook`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param WebHook This parameter is required if `Type` is `webhook`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetWebHook(const std::string& _webHook);

                    /**
                     * 判断参数 WebHook 是否已赋值
                     * @return WebHook 是否已赋值
                     */
                    bool WebHookHasBeenSet() const;

                private:

                    /**
                     * Whether it is enabled
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Convergence time
                     */
                    std::string m_repeatInterval;
                    bool m_repeatIntervalHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_timeRangeStart;
                    bool m_timeRangeStartHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_timeRangeEnd;
                    bool m_timeRangeEndHasBeenSet;

                    /**
                     * Alarm delivery method. Valid values: `SMS`, `EMAIL`, `CALL`, and `WECHAT`
It respectively represents SMS, email, phone calls, and WeChat.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * The alarm recipient group (user group)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<uint64_t> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * The alarm sequence of phone calls
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<uint64_t> m_phoneNotifyOrder;
                    bool m_phoneNotifyOrderHasBeenSet;

                    /**
                     * The number of phone call alarms
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_phoneCircleTimes;
                    bool m_phoneCircleTimesHasBeenSet;

                    /**
                     * Dialing interval in seconds within one polling
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_phoneInnerInterval;
                    bool m_phoneInnerIntervalHasBeenSet;

                    /**
                     * Polling interval in seconds
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_phoneCircleInterval;
                    bool m_phoneCircleIntervalHasBeenSet;

                    /**
                     * Phone call alarm arrival notification
This parameter is used when you specify `CALL` for `NotifyWay`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_phoneArriveNotice;
                    bool m_phoneArriveNoticeHasBeenSet;

                    /**
                     * Channel type. Default value: `amp`. The following channels are supported:
amp
webhook
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This parameter is required if `Type` is `webhook`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_webHook;
                    bool m_webHookHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSNOTIFICATION_H_
