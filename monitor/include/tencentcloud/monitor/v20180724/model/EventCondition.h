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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_EVENTCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_EVENTCONDITION_H_

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
                * Event alarm conditions
                */
                class EventCondition : public AbstractModel
                {
                public:
                    EventCondition();
                    ~EventCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm notification frequency.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AlarmNotifyPeriod Alarm notification frequency.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetAlarmNotifyPeriod() const;

                    /**
                     * 设置Alarm notification frequency.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param AlarmNotifyPeriod Alarm notification frequency.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAlarmNotifyPeriod(const std::string& _alarmNotifyPeriod);

                    /**
                     * 判断参数 AlarmNotifyPeriod 是否已赋值
                     * @return AlarmNotifyPeriod 是否已赋值
                     */
                    bool AlarmNotifyPeriodHasBeenSet() const;

                    /**
                     * 获取Predefined repeated notification policy. `0`: One-time alarm; `1`: exponential alarm; `2`: consecutive alarm
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AlarmNotifyType Predefined repeated notification policy. `0`: One-time alarm; `1`: exponential alarm; `2`: consecutive alarm
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetAlarmNotifyType() const;

                    /**
                     * 设置Predefined repeated notification policy. `0`: One-time alarm; `1`: exponential alarm; `2`: consecutive alarm
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param AlarmNotifyType Predefined repeated notification policy. `0`: One-time alarm; `1`: exponential alarm; `2`: consecutive alarm
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAlarmNotifyType(const std::string& _alarmNotifyType);

                    /**
                     * 判断参数 AlarmNotifyType 是否已赋值
                     * @return AlarmNotifyType 是否已赋值
                     */
                    bool AlarmNotifyTypeHasBeenSet() const;

                    /**
                     * 获取Event ID.
                     * @return EventID Event ID.
                     */
                    std::string GetEventID() const;

                    /**
                     * 设置Event ID.
                     * @param EventID Event ID.
                     */
                    void SetEventID(const std::string& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取Displayed event name.
                     * @return EventDisplayName Displayed event name.
                     */
                    std::string GetEventDisplayName() const;

                    /**
                     * 设置Displayed event name.
                     * @param EventDisplayName Displayed event name.
                     */
                    void SetEventDisplayName(const std::string& _eventDisplayName);

                    /**
                     * 判断参数 EventDisplayName 是否已赋值
                     * @return EventDisplayName 是否已赋值
                     */
                    bool EventDisplayNameHasBeenSet() const;

                    /**
                     * 获取Rule ID.
                     * @return RuleID Rule ID.
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置Rule ID.
                     * @param RuleID Rule ID.
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                private:

                    /**
                     * Alarm notification frequency.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * Predefined repeated notification policy. `0`: One-time alarm; `1`: exponential alarm; `2`: consecutive alarm
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * Event ID.
                     */
                    std::string m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * Displayed event name.
                     */
                    std::string m_eventDisplayName;
                    bool m_eventDisplayNameHasBeenSet;

                    /**
                     * Rule ID.
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_EVENTCONDITION_H_
