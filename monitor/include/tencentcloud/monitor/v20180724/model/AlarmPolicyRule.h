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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYRULE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyFilter.h>
#include <tencentcloud/monitor/v20180724/model/AlarmHierarchicalValue.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Trigger condition of alarm policy
                */
                class AlarmPolicyRule : public AbstractModel
                {
                public:
                    AlarmPolicyRule();
                    ~AlarmPolicyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric name or event name. The supported metrics can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1) and the supported events via [DescribeAlarmEvents](https://intl.cloud.tencent.com/document/product/248/51284?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MetricName Metric name or event name. The supported metrics can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1) and the supported events via [DescribeAlarmEvents](https://intl.cloud.tencent.com/document/product/248/51284?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name or event name. The supported metrics can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1) and the supported events via [DescribeAlarmEvents](https://intl.cloud.tencent.com/document/product/248/51284?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _metricName Metric name or event name. The supported metrics can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1) and the supported events via [DescribeAlarmEvents](https://intl.cloud.tencent.com/document/product/248/51284?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Statistical period in seconds. The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Period Statistical period in seconds. The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Statistical period in seconds. The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _period Statistical period in seconds. The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Operator
intelligent = intelligent detection without threshold
eq = equal to
ge = greater than or equal to
gt = greater than
le = less than or equal to
lt = less than
ne = not equal to
day_increase = day-on-day increase
day_decrease = day-on-day decrease
day_wave = day-on-day fluctuation
week_increase = week-on-week increase
week_decrease = week-on-week decrease
week_wave = week-on-week fluctuation
cycle_increase = cyclical increase
cycle_decrease = cyclical decrease
cycle_wave = cyclical fluctuation
re = regex match
The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Operator Operator
intelligent = intelligent detection without threshold
eq = equal to
ge = greater than or equal to
gt = greater than
le = less than or equal to
lt = less than
ne = not equal to
day_increase = day-on-day increase
day_decrease = day-on-day decrease
day_wave = day-on-day fluctuation
week_increase = week-on-week increase
week_decrease = week-on-week decrease
week_wave = week-on-week fluctuation
cycle_increase = cyclical increase
cycle_decrease = cyclical decrease
cycle_wave = cyclical fluctuation
re = regex match
The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator
intelligent = intelligent detection without threshold
eq = equal to
ge = greater than or equal to
gt = greater than
le = less than or equal to
lt = less than
ne = not equal to
day_increase = day-on-day increase
day_decrease = day-on-day decrease
day_wave = day-on-day fluctuation
week_increase = week-on-week increase
week_decrease = week-on-week decrease
week_wave = week-on-week fluctuation
cycle_increase = cyclical increase
cycle_decrease = cyclical decrease
cycle_wave = cyclical fluctuation
re = regex match
The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _operator Operator
intelligent = intelligent detection without threshold
eq = equal to
ge = greater than or equal to
gt = greater than
le = less than or equal to
lt = less than
ne = not equal to
day_increase = day-on-day increase
day_decrease = day-on-day decrease
day_wave = day-on-day fluctuation
week_increase = week-on-week increase
week_decrease = week-on-week decrease
week_wave = week-on-week fluctuation
cycle_increase = cyclical increase
cycle_decrease = cyclical decrease
cycle_wave = cyclical fluctuation
re = regex match
The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Threshold. The valid value range can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Value Threshold. The valid value range can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Threshold. The valid value range can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _value Threshold. The valid value range can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Number of periods. `1`: continue for one period; `2`: continue for two periods; and so on. The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ContinuePeriod Number of periods. `1`: continue for one period; `2`: continue for two periods; and so on. The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetContinuePeriod() const;

                    /**
                     * 设置Number of periods. `1`: continue for one period; `2`: continue for two periods; and so on. The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _continuePeriod Number of periods. `1`: continue for one period; `2`: continue for two periods; and so on. The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetContinuePeriod(const int64_t& _continuePeriod);

                    /**
                     * 判断参数 ContinuePeriod 是否已赋值
                     * @return ContinuePeriod 是否已赋值
                     * 
                     */
                    bool ContinuePeriodHasBeenSet() const;

                    /**
                     * 获取Alarm interval in seconds. Valid values: 0 (do not repeat), 300 (alarm once every 5 minutes), 600 (alarm once every 10 minutes), 900 (alarm once every 15 minutes), 1800 (alarm once every 30 minutes), 3600 (alarm once every hour), 7200 (alarm once every 2 hours), 10800 (alarm once every 3 hours), 21600 (alarm once every 6 hours),  43200 (alarm once every 12 hours), 86400 (alarm once every day)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NoticeFrequency Alarm interval in seconds. Valid values: 0 (do not repeat), 300 (alarm once every 5 minutes), 600 (alarm once every 10 minutes), 900 (alarm once every 15 minutes), 1800 (alarm once every 30 minutes), 3600 (alarm once every hour), 7200 (alarm once every 2 hours), 10800 (alarm once every 3 hours), 21600 (alarm once every 6 hours),  43200 (alarm once every 12 hours), 86400 (alarm once every day)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNoticeFrequency() const;

                    /**
                     * 设置Alarm interval in seconds. Valid values: 0 (do not repeat), 300 (alarm once every 5 minutes), 600 (alarm once every 10 minutes), 900 (alarm once every 15 minutes), 1800 (alarm once every 30 minutes), 3600 (alarm once every hour), 7200 (alarm once every 2 hours), 10800 (alarm once every 3 hours), 21600 (alarm once every 6 hours),  43200 (alarm once every 12 hours), 86400 (alarm once every day)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _noticeFrequency Alarm interval in seconds. Valid values: 0 (do not repeat), 300 (alarm once every 5 minutes), 600 (alarm once every 10 minutes), 900 (alarm once every 15 minutes), 1800 (alarm once every 30 minutes), 3600 (alarm once every hour), 7200 (alarm once every 2 hours), 10800 (alarm once every 3 hours), 21600 (alarm once every 6 hours),  43200 (alarm once every 12 hours), 86400 (alarm once every day)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNoticeFrequency(const int64_t& _noticeFrequency);

                    /**
                     * 判断参数 NoticeFrequency 是否已赋值
                     * @return NoticeFrequency 是否已赋值
                     * 
                     */
                    bool NoticeFrequencyHasBeenSet() const;

                    /**
                     * 获取Whether the alarm frequency increases exponentially. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsPowerNotice Whether the alarm frequency increases exponentially. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsPowerNotice() const;

                    /**
                     * 设置Whether the alarm frequency increases exponentially. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isPowerNotice Whether the alarm frequency increases exponentially. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsPowerNotice(const int64_t& _isPowerNotice);

                    /**
                     * 判断参数 IsPowerNotice 是否已赋值
                     * @return IsPowerNotice 是否已赋值
                     * 
                     */
                    bool IsPowerNoticeHasBeenSet() const;

                    /**
                     * 获取Filter condition for one single trigger rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Filter Filter condition for one single trigger rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AlarmPolicyFilter GetFilter() const;

                    /**
                     * 设置Filter condition for one single trigger rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _filter Filter condition for one single trigger rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFilter(const AlarmPolicyFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Metric display name, which is used in the output parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Metric display name, which is used in the output parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Metric display name, which is used in the output parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _description Metric display name, which is used in the output parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Unit, which is used in the output parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Unit Unit, which is used in the output parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Unit, which is used in the output parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _unit Unit, which is used in the output parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取Trigger condition type. `STATIC`: static threshold; `dynamic`: dynamic threshold. If you do not specify this parameter when creating or editing a policy, `STATIC` is used by default.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return RuleType Trigger condition type. `STATIC`: static threshold; `dynamic`: dynamic threshold. If you do not specify this parameter when creating or editing a policy, `STATIC` is used by default.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Trigger condition type. `STATIC`: static threshold; `dynamic`: dynamic threshold. If you do not specify this parameter when creating or editing a policy, `STATIC` is used by default.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _ruleType Trigger condition type. `STATIC`: static threshold; `dynamic`: dynamic threshold. If you do not specify this parameter when creating or editing a policy, `STATIC` is used by default.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is an advanced metric. 0: No; 1: Yes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return IsAdvanced Whether it is an advanced metric. 0: No; 1: Yes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsAdvanced() const;

                    /**
                     * 设置Whether it is an advanced metric. 0: No; 1: Yes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _isAdvanced Whether it is an advanced metric. 0: No; 1: Yes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsAdvanced(const int64_t& _isAdvanced);

                    /**
                     * 判断参数 IsAdvanced 是否已赋值
                     * @return IsAdvanced 是否已赋值
                     * 
                     */
                    bool IsAdvancedHasBeenSet() const;

                    /**
                     * 获取Whether the advanced metric feature is enabled. 0: No; 1: Yes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return IsOpen Whether the advanced metric feature is enabled. 0: No; 1: Yes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsOpen() const;

                    /**
                     * 设置Whether the advanced metric feature is enabled. 0: No; 1: Yes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _isOpen Whether the advanced metric feature is enabled. 0: No; 1: Yes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsOpen(const int64_t& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     * 
                     */
                    bool IsOpenHasBeenSet() const;

                    /**
                     * 获取Integration center product ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ProductId Integration center product ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置Integration center product ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _productId Integration center product ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Maximum value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValueMax Maximum value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetValueMax() const;

                    /**
                     * 设置Maximum value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _valueMax Maximum value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValueMax(const double& _valueMax);

                    /**
                     * 判断参数 ValueMax 是否已赋值
                     * @return ValueMax 是否已赋值
                     * 
                     */
                    bool ValueMaxHasBeenSet() const;

                    /**
                     * 获取Minimum value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValueMin Minimum value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetValueMin() const;

                    /**
                     * 设置Minimum value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _valueMin Minimum value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValueMin(const double& _valueMin);

                    /**
                     * 判断参数 ValueMin 是否已赋值
                     * @return ValueMin 是否已赋值
                     * 
                     */
                    bool ValueMinHasBeenSet() const;

                    /**
                     * 获取The configuration of alarm level threshold
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HierarchicalValue The configuration of alarm level threshold
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AlarmHierarchicalValue GetHierarchicalValue() const;

                    /**
                     * 设置The configuration of alarm level threshold
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hierarchicalValue The configuration of alarm level threshold
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHierarchicalValue(const AlarmHierarchicalValue& _hierarchicalValue);

                    /**
                     * 判断参数 HierarchicalValue 是否已赋值
                     * @return HierarchicalValue 是否已赋值
                     * 
                     */
                    bool HierarchicalValueHasBeenSet() const;

                private:

                    /**
                     * Metric name or event name. The supported metrics can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1) and the supported events via [DescribeAlarmEvents](https://intl.cloud.tencent.com/document/product/248/51284?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Statistical period in seconds. The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Operator
intelligent = intelligent detection without threshold
eq = equal to
ge = greater than or equal to
gt = greater than
le = less than or equal to
lt = less than
ne = not equal to
day_increase = day-on-day increase
day_decrease = day-on-day decrease
day_wave = day-on-day fluctuation
week_increase = week-on-week increase
week_decrease = week-on-week decrease
week_wave = week-on-week fluctuation
cycle_increase = cyclical increase
cycle_decrease = cyclical decrease
cycle_wave = cyclical fluctuation
re = regex match
The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Threshold. The valid value range can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Number of periods. `1`: continue for one period; `2`: continue for two periods; and so on. The valid values can be queried via [DescribeAlarmMetrics](https://intl.cloud.tencent.com/document/product/248/51283?from_cn_redirect=1).
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

                    /**
                     * Alarm interval in seconds. Valid values: 0 (do not repeat), 300 (alarm once every 5 minutes), 600 (alarm once every 10 minutes), 900 (alarm once every 15 minutes), 1800 (alarm once every 30 minutes), 3600 (alarm once every hour), 7200 (alarm once every 2 hours), 10800 (alarm once every 3 hours), 21600 (alarm once every 6 hours),  43200 (alarm once every 12 hours), 86400 (alarm once every day)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_noticeFrequency;
                    bool m_noticeFrequencyHasBeenSet;

                    /**
                     * Whether the alarm frequency increases exponentially. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isPowerNotice;
                    bool m_isPowerNoticeHasBeenSet;

                    /**
                     * Filter condition for one single trigger rule
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AlarmPolicyFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Metric display name, which is used in the output parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Unit, which is used in the output parameter
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Trigger condition type. `STATIC`: static threshold; `dynamic`: dynamic threshold. If you do not specify this parameter when creating or editing a policy, `STATIC` is used by default.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Whether it is an advanced metric. 0: No; 1: Yes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_isAdvanced;
                    bool m_isAdvancedHasBeenSet;

                    /**
                     * Whether the advanced metric feature is enabled. 0: No; 1: Yes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_isOpen;
                    bool m_isOpenHasBeenSet;

                    /**
                     * Integration center product ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Maximum value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_valueMax;
                    bool m_valueMaxHasBeenSet;

                    /**
                     * Minimum value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_valueMin;
                    bool m_valueMinHasBeenSet;

                    /**
                     * The configuration of alarm level threshold
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AlarmHierarchicalValue m_hierarchicalValue;
                    bool m_hierarchicalValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYRULE_H_
