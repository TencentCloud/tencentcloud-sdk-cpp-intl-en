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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPCONDITION_H_

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
                * Alarm threshold condition passed in when a policy is created.
                */
                class CreatePolicyGroupCondition : public AbstractModel
                {
                public:
                    CreatePolicyGroupCondition();
                    ~CreatePolicyGroupCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric ID.
                     * @return MetricId Metric ID.
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置Metric ID.
                     * @param MetricId Metric ID.
                     */
                    void SetMetricId(const int64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取Alarm sending and converging type. The value 0 indicates that alarms are sent consecutively. The value 1 indicates that alarms are sent exponentially.
                     * @return AlarmNotifyType Alarm sending and converging type. The value 0 indicates that alarms are sent consecutively. The value 1 indicates that alarms are sent exponentially.
                     */
                    int64_t GetAlarmNotifyType() const;

                    /**
                     * 设置Alarm sending and converging type. The value 0 indicates that alarms are sent consecutively. The value 1 indicates that alarms are sent exponentially.
                     * @param AlarmNotifyType Alarm sending and converging type. The value 0 indicates that alarms are sent consecutively. The value 1 indicates that alarms are sent exponentially.
                     */
                    void SetAlarmNotifyType(const int64_t& _alarmNotifyType);

                    /**
                     * 判断参数 AlarmNotifyType 是否已赋值
                     * @return AlarmNotifyType 是否已赋值
                     */
                    bool AlarmNotifyTypeHasBeenSet() const;

                    /**
                     * 获取Alarm sending period in seconds. The value <0 indicates that no alarm will be triggered. The value 0 indicates that an alarm is triggered only once. The value >0 indicates that an alarm is triggered at the interval of triggerTime.
                     * @return AlarmNotifyPeriod Alarm sending period in seconds. The value <0 indicates that no alarm will be triggered. The value 0 indicates that an alarm is triggered only once. The value >0 indicates that an alarm is triggered at the interval of triggerTime.
                     */
                    int64_t GetAlarmNotifyPeriod() const;

                    /**
                     * 设置Alarm sending period in seconds. The value <0 indicates that no alarm will be triggered. The value 0 indicates that an alarm is triggered only once. The value >0 indicates that an alarm is triggered at the interval of triggerTime.
                     * @param AlarmNotifyPeriod Alarm sending period in seconds. The value <0 indicates that no alarm will be triggered. The value 0 indicates that an alarm is triggered only once. The value >0 indicates that an alarm is triggered at the interval of triggerTime.
                     */
                    void SetAlarmNotifyPeriod(const int64_t& _alarmNotifyPeriod);

                    /**
                     * 判断参数 AlarmNotifyPeriod 是否已赋值
                     * @return AlarmNotifyPeriod 是否已赋值
                     */
                    bool AlarmNotifyPeriodHasBeenSet() const;

                    /**
                     * 获取Comparative type. The value 1 indicates greater than. The value 2 indicates greater than or equal to. The value 3 indicates smaller than. The value 4 indicates smaller than or equal to. The value 5 indicates equal to. The value 6 indicates not equal to. This parameter is optional if a default comparative type is configured for the metric.
                     * @return CalcType Comparative type. The value 1 indicates greater than. The value 2 indicates greater than or equal to. The value 3 indicates smaller than. The value 4 indicates smaller than or equal to. The value 5 indicates equal to. The value 6 indicates not equal to. This parameter is optional if a default comparative type is configured for the metric.
                     */
                    int64_t GetCalcType() const;

                    /**
                     * 设置Comparative type. The value 1 indicates greater than. The value 2 indicates greater than or equal to. The value 3 indicates smaller than. The value 4 indicates smaller than or equal to. The value 5 indicates equal to. The value 6 indicates not equal to. This parameter is optional if a default comparative type is configured for the metric.
                     * @param CalcType Comparative type. The value 1 indicates greater than. The value 2 indicates greater than or equal to. The value 3 indicates smaller than. The value 4 indicates smaller than or equal to. The value 5 indicates equal to. The value 6 indicates not equal to. This parameter is optional if a default comparative type is configured for the metric.
                     */
                    void SetCalcType(const int64_t& _calcType);

                    /**
                     * 判断参数 CalcType 是否已赋值
                     * @return CalcType 是否已赋值
                     */
                    bool CalcTypeHasBeenSet() const;

                    /**
                     * 获取Comparative value. This parameter is optional if the metric has no requirement.
                     * @return CalcValue Comparative value. This parameter is optional if the metric has no requirement.
                     */
                    double GetCalcValue() const;

                    /**
                     * 设置Comparative value. This parameter is optional if the metric has no requirement.
                     * @param CalcValue Comparative value. This parameter is optional if the metric has no requirement.
                     */
                    void SetCalcValue(const double& _calcValue);

                    /**
                     * 判断参数 CalcValue 是否已赋值
                     * @return CalcValue 是否已赋值
                     */
                    bool CalcValueHasBeenSet() const;

                    /**
                     * 获取Data aggregation period in seconds. This parameter is optional if the metric has a default value.
                     * @return CalcPeriod Data aggregation period in seconds. This parameter is optional if the metric has a default value.
                     */
                    int64_t GetCalcPeriod() const;

                    /**
                     * 设置Data aggregation period in seconds. This parameter is optional if the metric has a default value.
                     * @param CalcPeriod Data aggregation period in seconds. This parameter is optional if the metric has a default value.
                     */
                    void SetCalcPeriod(const int64_t& _calcPeriod);

                    /**
                     * 判断参数 CalcPeriod 是否已赋值
                     * @return CalcPeriod 是否已赋值
                     */
                    bool CalcPeriodHasBeenSet() const;

                    /**
                     * 获取Number of consecutive periods after which an alarm will be triggered.
                     * @return ContinuePeriod Number of consecutive periods after which an alarm will be triggered.
                     */
                    int64_t GetContinuePeriod() const;

                    /**
                     * 设置Number of consecutive periods after which an alarm will be triggered.
                     * @param ContinuePeriod Number of consecutive periods after which an alarm will be triggered.
                     */
                    void SetContinuePeriod(const int64_t& _continuePeriod);

                    /**
                     * 判断参数 ContinuePeriod 是否已赋值
                     * @return ContinuePeriod 是否已赋值
                     */
                    bool ContinuePeriodHasBeenSet() const;

                    /**
                     * 获取If a metric is created based on a template, the RuleId of the metric in the template must be passed in.
                     * @return RuleId If a metric is created based on a template, the RuleId of the metric in the template must be passed in.
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置If a metric is created based on a template, the RuleId of the metric in the template must be passed in.
                     * @param RuleId If a metric is created based on a template, the RuleId of the metric in the template must be passed in.
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Metric ID.
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * Alarm sending and converging type. The value 0 indicates that alarms are sent consecutively. The value 1 indicates that alarms are sent exponentially.
                     */
                    int64_t m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * Alarm sending period in seconds. The value <0 indicates that no alarm will be triggered. The value 0 indicates that an alarm is triggered only once. The value >0 indicates that an alarm is triggered at the interval of triggerTime.
                     */
                    int64_t m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * Comparative type. The value 1 indicates greater than. The value 2 indicates greater than or equal to. The value 3 indicates smaller than. The value 4 indicates smaller than or equal to. The value 5 indicates equal to. The value 6 indicates not equal to. This parameter is optional if a default comparative type is configured for the metric.
                     */
                    int64_t m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * Comparative value. This parameter is optional if the metric has no requirement.
                     */
                    double m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * Data aggregation period in seconds. This parameter is optional if the metric has a default value.
                     */
                    int64_t m_calcPeriod;
                    bool m_calcPeriodHasBeenSet;

                    /**
                     * Number of consecutive periods after which an alarm will be triggered.
                     */
                    int64_t m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

                    /**
                     * If a metric is created based on a template, the RuleId of the metric in the template must be passed in.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPCONDITION_H_
