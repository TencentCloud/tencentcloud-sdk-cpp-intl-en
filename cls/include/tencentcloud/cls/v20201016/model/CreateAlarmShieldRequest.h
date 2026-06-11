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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMSHIELDREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMSHIELDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateAlarmShield request structure.
                */
                class CreateAlarmShieldRequest : public AbstractModel
                {
                public:
                    CreateAlarmShieldRequest();
                    ~CreateAlarmShieldRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notification channel group id. Search the notification channel group list (https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1) to get the notification channel group id.
                     * @return AlarmNoticeId Notification channel group id. Search the notification channel group list (https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1) to get the notification channel group id.
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置Notification channel group id. Search the notification channel group list (https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1) to get the notification channel group id.
                     * @param _alarmNoticeId Notification channel group id. Search the notification channel group list (https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1) to get the notification channel group id.
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
                     * 获取Block rule start time (second-level timestamp).
                     * @return StartTime Block rule start time (second-level timestamp).
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Block rule start time (second-level timestamp).
                     * @param _startTime Block rule start time (second-level timestamp).
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Block rule end time (second-level timestamp). The end time must be greater than the current time.
                     * @return EndTime Block rule end time (second-level timestamp). The end time must be greater than the current time.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Block rule end time (second-level timestamp). The end time must be greater than the current time.
                     * @param _endTime Block rule end time (second-level timestamp). The end time must be greater than the current time.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Block type. 1: Block all notifications, 2: Block matching rules notifications according to the Rule parameter.
                     * @return Type Block type. 1: Block all notifications, 2: Block matching rules notifications according to the Rule parameter.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Block type. 1: Block all notifications, 2: Block matching rules notifications according to the Rule parameter.
                     * @param _type Block type. 1: Block all notifications, 2: Block matching rules notifications according to the Rule parameter.
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
                     * 获取Blocking reason.
                     * @return Reason Blocking reason.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Blocking reason.
                     * @param _reason Blocking reason.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Blocking rules, required when Type is 2. For detailed information on filling in rules, see [Product Documentation](https://intl.cloud.tencent.com/document/product/614/103178?from_cn_redirect=1#rule).
                     * @return Rule Blocking rules, required when Type is 2. For detailed information on filling in rules, see [Product Documentation](https://intl.cloud.tencent.com/document/product/614/103178?from_cn_redirect=1#rule).
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置Blocking rules, required when Type is 2. For detailed information on filling in rules, see [Product Documentation](https://intl.cloud.tencent.com/document/product/614/103178?from_cn_redirect=1#rule).
                     * @param _rule Blocking rules, required when Type is 2. For detailed information on filling in rules, see [Product Documentation](https://intl.cloud.tencent.com/document/product/614/103178?from_cn_redirect=1#rule).
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * Notification channel group id. Search the notification channel group list (https://www.tencentcloud.com/document/product/614/56462?from_cn_redirect=1) to get the notification channel group id.
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * Block rule start time (second-level timestamp).
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Block rule end time (second-level timestamp). The end time must be greater than the current time.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Block type. 1: Block all notifications, 2: Block matching rules notifications according to the Rule parameter.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Blocking reason.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Blocking rules, required when Type is 2. For detailed information on filling in rules, see [Product Documentation](https://intl.cloud.tencent.com/document/product/614/103178?from_cn_redirect=1#rule).
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMSHIELDREQUEST_H_
