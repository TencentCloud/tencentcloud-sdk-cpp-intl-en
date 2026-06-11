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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESCALATENOTICEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESCALATENOTICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>
#include <tencentcloud/cls/v20201016/model/EscalateNoticeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Upgrade notification.
                */
                class EscalateNoticeInfo : public AbstractModel
                {
                public:
                    EscalateNoticeInfo();
                    ~EscalateNoticeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm notification template recipient information.
                     * @return NoticeReceivers Alarm notification template recipient information.
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置Alarm notification template recipient information.
                     * @param _noticeReceivers Alarm notification template recipient information.
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
                     * 获取Callback information of alarm notification template.
                     * @return WebCallbacks Callback information of alarm notification template.
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置Callback information of alarm notification template.
                     * @param _webCallbacks Callback information of alarm notification template.
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
                     * 获取Alarm escalation switch. `true`: enable alarm escalation, `false`: disable alarm escalation. Default: false.
                     * @return Escalate Alarm escalation switch. `true`: enable alarm escalation, `false`: disable alarm escalation. Default: false.
                     * 
                     */
                    bool GetEscalate() const;

                    /**
                     * 设置Alarm escalation switch. `true`: enable alarm escalation, `false`: disable alarm escalation. Default: false.
                     * @param _escalate Alarm escalation switch. `true`: enable alarm escalation, `false`: disable alarm escalation. Default: false.
                     * 
                     */
                    void SetEscalate(const bool& _escalate);

                    /**
                     * 判断参数 Escalate 是否已赋值
                     * @return Escalate 是否已赋值
                     * 
                     */
                    bool EscalateHasBeenSet() const;

                    /**
                     * 获取Escalate alarms interval. Unit: minutes, range `[1, 14400]`.
                     * @return Interval Escalate alarms interval. Unit: minutes, range `[1, 14400]`.
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Escalate alarms interval. Unit: minutes, range `[1, 14400]`.
                     * @param _interval Escalate alarms interval. Unit: minutes, range `[1, 14400]`.
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Upgrade conditions. `1`: Unclaimed and unrecovered, `2`: Unrecovered, defaults to 1.
-Unclaimed and unrecovered: Upgrade if the alert is not restored and no one claims it.
-Unrecovered: Upgrade if the alarm persists without recovery.

                     * @return Type Upgrade conditions. `1`: Unclaimed and unrecovered, `2`: Unrecovered, defaults to 1.
-Unclaimed and unrecovered: Upgrade if the alert is not restored and no one claims it.
-Unrecovered: Upgrade if the alarm persists without recovery.

                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Upgrade conditions. `1`: Unclaimed and unrecovered, `2`: Unrecovered, defaults to 1.
-Unclaimed and unrecovered: Upgrade if the alert is not restored and no one claims it.
-Unrecovered: Upgrade if the alarm persists without recovery.

                     * @param _type Upgrade conditions. `1`: Unclaimed and unrecovered, `2`: Unrecovered, defaults to 1.
-Unclaimed and unrecovered: Upgrade if the alert is not restored and no one claims it.
-Unrecovered: Upgrade if the alarm persists without recovery.

                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Notification channel configuration for the next step after alarm severity escalation. A maximum of five steps can be configured.
                     * @return EscalateNotice Notification channel configuration for the next step after alarm severity escalation. A maximum of five steps can be configured.
                     * 
                     */
                    EscalateNoticeInfo GetEscalateNotice() const;

                    /**
                     * 设置Notification channel configuration for the next step after alarm severity escalation. A maximum of five steps can be configured.
                     * @param _escalateNotice Notification channel configuration for the next step after alarm severity escalation. A maximum of five steps can be configured.
                     * 
                     */
                    void SetEscalateNotice(const EscalateNoticeInfo& _escalateNotice);

                    /**
                     * 判断参数 EscalateNotice 是否已赋值
                     * @return EscalateNotice 是否已赋值
                     * 
                     */
                    bool EscalateNoticeHasBeenSet() const;

                private:

                    /**
                     * Alarm notification template recipient information.
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * Callback information of alarm notification template.
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * Alarm escalation switch. `true`: enable alarm escalation, `false`: disable alarm escalation. Default: false.
                     */
                    bool m_escalate;
                    bool m_escalateHasBeenSet;

                    /**
                     * Escalate alarms interval. Unit: minutes, range `[1, 14400]`.
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Upgrade conditions. `1`: Unclaimed and unrecovered, `2`: Unrecovered, defaults to 1.
-Unclaimed and unrecovered: Upgrade if the alert is not restored and no one claims it.
-Unrecovered: Upgrade if the alarm persists without recovery.

                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Notification channel configuration for the next step after alarm severity escalation. A maximum of five steps can be configured.
                     */
                    EscalateNoticeInfo m_escalateNotice;
                    bool m_escalateNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESCALATENOTICEINFO_H_
