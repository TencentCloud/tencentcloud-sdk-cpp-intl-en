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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSNOTIFICATIONITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSNOTIFICATIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertManagerConfig.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Alert notification channel configuration
                */
                class PrometheusNotificationItem : public AbstractModel
                {
                public:
                    PrometheusNotificationItem();
                    ~PrometheusNotificationItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether it is enabled
                     * @return Enabled Whether it is enabled
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether it is enabled
                     * @param _enabled Whether it is enabled
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Channel type. Default value: `amp`. Valid values:
`amp`
`webhook`
`alertmanager`
                     * @return Type Channel type. Default value: `amp`. Valid values:
`amp`
`webhook`
`alertmanager`
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Channel type. Default value: `amp`. Valid values:
`amp`
`webhook`
`alertmanager`
                     * @param _type Channel type. Default value: `amp`. Valid values:
`amp`
`webhook`
`alertmanager`
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
                     * 获取If `Type` is `webhook`, this field is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WebHook If `Type` is `webhook`, this field is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWebHook() const;

                    /**
                     * 设置If `Type` is `webhook`, this field is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _webHook If `Type` is `webhook`, this field is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWebHook(const std::string& _webHook);

                    /**
                     * 判断参数 WebHook 是否已赋值
                     * @return WebHook 是否已赋值
                     * 
                     */
                    bool WebHookHasBeenSet() const;

                    /**
                     * 获取If `Type` is `alertmanager`, this field is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlertManager If `Type` is `alertmanager`, this field is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PrometheusAlertManagerConfig GetAlertManager() const;

                    /**
                     * 设置If `Type` is `alertmanager`, this field is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alertManager If `Type` is `alertmanager`, this field is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlertManager(const PrometheusAlertManagerConfig& _alertManager);

                    /**
                     * 判断参数 AlertManager 是否已赋值
                     * @return AlertManager 是否已赋值
                     * 
                     */
                    bool AlertManagerHasBeenSet() const;

                    /**
                     * 获取Convergence time
                     * @return RepeatInterval Convergence time
                     * 
                     */
                    std::string GetRepeatInterval() const;

                    /**
                     * 设置Convergence time
                     * @param _repeatInterval Convergence time
                     * 
                     */
                    void SetRepeatInterval(const std::string& _repeatInterval);

                    /**
                     * 判断参数 RepeatInterval 是否已赋值
                     * @return RepeatInterval 是否已赋值
                     * 
                     */
                    bool RepeatIntervalHasBeenSet() const;

                    /**
                     * 获取Effect start time
                     * @return TimeRangeStart Effect start time
                     * 
                     */
                    std::string GetTimeRangeStart() const;

                    /**
                     * 设置Effect start time
                     * @param _timeRangeStart Effect start time
                     * 
                     */
                    void SetTimeRangeStart(const std::string& _timeRangeStart);

                    /**
                     * 判断参数 TimeRangeStart 是否已赋值
                     * @return TimeRangeStart 是否已赋值
                     * 
                     */
                    bool TimeRangeStartHasBeenSet() const;

                    /**
                     * 获取Effect end time
                     * @return TimeRangeEnd Effect end time
                     * 
                     */
                    std::string GetTimeRangeEnd() const;

                    /**
                     * 设置Effect end time
                     * @param _timeRangeEnd Effect end time
                     * 
                     */
                    void SetTimeRangeEnd(const std::string& _timeRangeEnd);

                    /**
                     * 判断参数 TimeRangeEnd 是否已赋值
                     * @return TimeRangeEnd 是否已赋值
                     * 
                     */
                    bool TimeRangeEndHasBeenSet() const;

                    /**
                     * 获取Alert notification channel. Valid values: `SMS`, `EMAIL`, `CALL`, `WECHAT`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NotifyWay Alert notification channel. Valid values: `SMS`, `EMAIL`, `CALL`, `WECHAT`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置Alert notification channel. Valid values: `SMS`, `EMAIL`, `CALL`, `WECHAT`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _notifyWay Alert notification channel. Valid values: `SMS`, `EMAIL`, `CALL`, `WECHAT`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNotifyWay(const std::vector<std::string>& _notifyWay);

                    /**
                     * 判断参数 NotifyWay 是否已赋值
                     * @return NotifyWay 是否已赋值
                     * 
                     */
                    bool NotifyWayHasBeenSet() const;

                    /**
                     * 获取Alert recipient group (user group)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReceiverGroups Alert recipient group (user group)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetReceiverGroups() const;

                    /**
                     * 设置Alert recipient group (user group)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _receiverGroups Alert recipient group (user group)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReceiverGroups(const std::vector<std::string>& _receiverGroups);

                    /**
                     * 判断参数 ReceiverGroups 是否已赋值
                     * @return ReceiverGroups 是否已赋值
                     * 
                     */
                    bool ReceiverGroupsHasBeenSet() const;

                    /**
                     * 获取Alert call sequence.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhoneNotifyOrder Alert call sequence.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetPhoneNotifyOrder() const;

                    /**
                     * 设置Alert call sequence.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phoneNotifyOrder Alert call sequence.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhoneNotifyOrder(const std::vector<uint64_t>& _phoneNotifyOrder);

                    /**
                     * 判断参数 PhoneNotifyOrder 是否已赋值
                     * @return PhoneNotifyOrder 是否已赋值
                     * 
                     */
                    bool PhoneNotifyOrderHasBeenSet() const;

                    /**
                     * 获取Number of alert calls.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhoneCircleTimes Number of alert calls.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPhoneCircleTimes() const;

                    /**
                     * 设置Number of alert calls.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phoneCircleTimes Number of alert calls.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhoneCircleTimes(const int64_t& _phoneCircleTimes);

                    /**
                     * 判断参数 PhoneCircleTimes 是否已赋值
                     * @return PhoneCircleTimes 是否已赋值
                     * 
                     */
                    bool PhoneCircleTimesHasBeenSet() const;

                    /**
                     * 获取Alert call interval within a cycle in seconds.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhoneInnerInterval Alert call interval within a cycle in seconds.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPhoneInnerInterval() const;

                    /**
                     * 设置Alert call interval within a cycle in seconds.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phoneInnerInterval Alert call interval within a cycle in seconds.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhoneInnerInterval(const int64_t& _phoneInnerInterval);

                    /**
                     * 判断参数 PhoneInnerInterval 是否已赋值
                     * @return PhoneInnerInterval 是否已赋值
                     * 
                     */
                    bool PhoneInnerIntervalHasBeenSet() const;

                    /**
                     * 获取Alert call cycle interval in seconds.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhoneCircleInterval Alert call cycle interval in seconds.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPhoneCircleInterval() const;

                    /**
                     * 设置Alert call cycle interval in seconds.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phoneCircleInterval Alert call cycle interval in seconds.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhoneCircleInterval(const int64_t& _phoneCircleInterval);

                    /**
                     * 判断参数 PhoneCircleInterval 是否已赋值
                     * @return PhoneCircleInterval 是否已赋值
                     * 
                     */
                    bool PhoneCircleIntervalHasBeenSet() const;

                    /**
                     * 获取Alert call receipt notification
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhoneArriveNotice Alert call receipt notification
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetPhoneArriveNotice() const;

                    /**
                     * 设置Alert call receipt notification
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phoneArriveNotice Alert call receipt notification
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhoneArriveNotice(const bool& _phoneArriveNotice);

                    /**
                     * 判断参数 PhoneArriveNotice 是否已赋值
                     * @return PhoneArriveNotice 是否已赋值
                     * 
                     */
                    bool PhoneArriveNoticeHasBeenSet() const;

                private:

                    /**
                     * Whether it is enabled
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Channel type. Default value: `amp`. Valid values:
`amp`
`webhook`
`alertmanager`
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * If `Type` is `webhook`, this field is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_webHook;
                    bool m_webHookHasBeenSet;

                    /**
                     * If `Type` is `alertmanager`, this field is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PrometheusAlertManagerConfig m_alertManager;
                    bool m_alertManagerHasBeenSet;

                    /**
                     * Convergence time
                     */
                    std::string m_repeatInterval;
                    bool m_repeatIntervalHasBeenSet;

                    /**
                     * Effect start time
                     */
                    std::string m_timeRangeStart;
                    bool m_timeRangeStartHasBeenSet;

                    /**
                     * Effect end time
                     */
                    std::string m_timeRangeEnd;
                    bool m_timeRangeEndHasBeenSet;

                    /**
                     * Alert notification channel. Valid values: `SMS`, `EMAIL`, `CALL`, `WECHAT`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * Alert recipient group (user group)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * Alert call sequence.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_phoneNotifyOrder;
                    bool m_phoneNotifyOrderHasBeenSet;

                    /**
                     * Number of alert calls.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_phoneCircleTimes;
                    bool m_phoneCircleTimesHasBeenSet;

                    /**
                     * Alert call interval within a cycle in seconds.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_phoneInnerInterval;
                    bool m_phoneInnerIntervalHasBeenSet;

                    /**
                     * Alert call cycle interval in seconds.
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_phoneCircleInterval;
                    bool m_phoneCircleIntervalHasBeenSet;

                    /**
                     * Alert call receipt notification
Note: If `NotifyWay` is `CALL`, this parameter will be used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_phoneArriveNotice;
                    bool m_phoneArriveNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSNOTIFICATIONITEM_H_
