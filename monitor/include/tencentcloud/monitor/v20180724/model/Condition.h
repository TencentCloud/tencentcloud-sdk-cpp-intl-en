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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITION_H_

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
                * Alarm condition
                */
                class Condition : public AbstractModel
                {
                public:
                    Condition();
                    ~Condition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm notification frequency.
                     * @return AlarmNotifyPeriod Alarm notification frequency.
                     */
                    int64_t GetAlarmNotifyPeriod() const;

                    /**
                     * 设置Alarm notification frequency.
                     * @param AlarmNotifyPeriod Alarm notification frequency.
                     */
                    void SetAlarmNotifyPeriod(const int64_t& _alarmNotifyPeriod);

                    /**
                     * 判断参数 AlarmNotifyPeriod 是否已赋值
                     * @return AlarmNotifyPeriod 是否已赋值
                     */
                    bool AlarmNotifyPeriodHasBeenSet() const;

                    /**
                     * 获取Predefined repeated notification policy. `0`: One-time alarm; `1`: exponential alarm; `2`: consecutive alarm.
                     * @return AlarmNotifyType Predefined repeated notification policy. `0`: One-time alarm; `1`: exponential alarm; `2`: consecutive alarm.
                     */
                    int64_t GetAlarmNotifyType() const;

                    /**
                     * 设置Predefined repeated notification policy. `0`: One-time alarm; `1`: exponential alarm; `2`: consecutive alarm.
                     * @param AlarmNotifyType Predefined repeated notification policy. `0`: One-time alarm; `1`: exponential alarm; `2`: consecutive alarm.
                     */
                    void SetAlarmNotifyType(const int64_t& _alarmNotifyType);

                    /**
                     * 判断参数 AlarmNotifyType 是否已赋值
                     * @return AlarmNotifyType 是否已赋值
                     */
                    bool AlarmNotifyTypeHasBeenSet() const;

                    /**
                     * 获取Detection method.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CalcType Detection method.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCalcType() const;

                    /**
                     * 设置Detection method.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CalcType Detection method.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCalcType(const std::string& _calcType);

                    /**
                     * 判断参数 CalcType 是否已赋值
                     * @return CalcType 是否已赋值
                     */
                    bool CalcTypeHasBeenSet() const;

                    /**
                     * 获取Detection value.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CalcValue Detection value.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCalcValue() const;

                    /**
                     * 设置Detection value.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CalcValue Detection value.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCalcValue(const std::string& _calcValue);

                    /**
                     * 判断参数 CalcValue 是否已赋值
                     * @return CalcValue 是否已赋值
                     */
                    bool CalcValueHasBeenSet() const;

                    /**
                     * 获取Duration.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ContinueTime Duration.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetContinueTime() const;

                    /**
                     * 设置Duration.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ContinueTime Duration.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetContinueTime(const std::string& _continueTime);

                    /**
                     * 判断参数 ContinueTime 是否已赋值
                     * @return ContinueTime 是否已赋值
                     */
                    bool ContinueTimeHasBeenSet() const;

                    /**
                     * 获取Metric ID.
                     * @return MetricID Metric ID.
                     */
                    int64_t GetMetricID() const;

                    /**
                     * 设置Metric ID.
                     * @param MetricID Metric ID.
                     */
                    void SetMetricID(const int64_t& _metricID);

                    /**
                     * 判断参数 MetricID 是否已赋值
                     * @return MetricID 是否已赋值
                     */
                    bool MetricIDHasBeenSet() const;

                    /**
                     * 获取Displayed metric name.
                     * @return MetricDisplayName Displayed metric name.
                     */
                    std::string GetMetricDisplayName() const;

                    /**
                     * 设置Displayed metric name.
                     * @param MetricDisplayName Displayed metric name.
                     */
                    void SetMetricDisplayName(const std::string& _metricDisplayName);

                    /**
                     * 判断参数 MetricDisplayName 是否已赋值
                     * @return MetricDisplayName 是否已赋值
                     */
                    bool MetricDisplayNameHasBeenSet() const;

                    /**
                     * 获取Statistical period.
                     * @return Period Statistical period.
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Statistical period.
                     * @param Period Statistical period.
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Rule ID.
                     * @return RuleID Rule ID.
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置Rule ID.
                     * @param RuleID Rule ID.
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Metric unit.
                     * @return Unit Metric unit.
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Metric unit.
                     * @param Unit Metric unit.
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * Alarm notification frequency.
                     */
                    int64_t m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * Predefined repeated notification policy. `0`: One-time alarm; `1`: exponential alarm; `2`: consecutive alarm.
                     */
                    int64_t m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * Detection method.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * Detection value.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * Duration.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_continueTime;
                    bool m_continueTimeHasBeenSet;

                    /**
                     * Metric ID.
                     */
                    int64_t m_metricID;
                    bool m_metricIDHasBeenSet;

                    /**
                     * Displayed metric name.
                     */
                    std::string m_metricDisplayName;
                    bool m_metricDisplayNameHasBeenSet;

                    /**
                     * Statistical period.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Rule ID.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Metric unit.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITION_H_
